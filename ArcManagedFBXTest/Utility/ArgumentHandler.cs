using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Text.RegularExpressions;

namespace ArcManagedFBXTest.Utility
{
    using Attributes;

    public class ArgumentValue
    {
        private string[] m_RawValue;

        #region Constructors
        private ArgumentValue()
        {

        }

        public ArgumentValue(string[] values)
        {
            m_RawValue = values;
        }
        #endregion

        #region Getters
        public int AsInt32
        {
            get
            {
                if (!m_RawValue.Any())
                    throw new InvalidCastException("The raw value has not been defined for this argument.");

                return 0;
            }
        }

        public byte AsByte
        {
            get
            {
                if (!m_RawValue.Any())
                    throw new InvalidCastException("The raw value has not been defined for this argument.");

                byte output = 0;

                output = byte.Parse(m_RawValue[0]);

                return output;
            }
        }


        public short AsInt16
        {
            get
            {
                if (!m_RawValue.Any())
                    throw new InvalidCastException("The raw value has not been defined for this argument.");

                short output = -1;

                output = short.Parse(m_RawValue[0]);

                return output;
            }
        }

        public string AsString
        {
            get
            {
                if (!m_RawValue.Any())
                    throw new InvalidCastException("The raw value has not been defined for this argument.");

                return m_RawValue[0];
            }
        }

        public bool AsBool
        {
            get
            {
                if (!m_RawValue.Any())
                    throw new InvalidCastException("The raw value has not been defined for this argument.");

                bool output = bool.Parse(m_RawValue[0]);

                return output;
            }
        }

        public string[] AsRaw
        {
            get
            {
                if (!m_RawValue.Any())
                    throw new InvalidCastException("The raw value has not been defined for this argument.");

                return m_RawValue;
            }
        }
        #endregion
    }

    public class ArgumentHandler
    {
        private Dictionary<string, ArgumentValue> m_Arguments = new Dictionary<string, ArgumentValue>();

        private Regex m_KeyValueRegex = new Regex("(?'key'-[a-zA-Z0-9]+)(?'whitespace'\\s)(?'value'[a-zA-Z0-9\\s]+)");

        public string[] this[string name]
        {
            get
            {
                if (string.IsNullOrEmpty(name))
                    throw new InvalidCastException("The name that was specified is considered invalid.");

                return this.m_Arguments[name].AsRaw;
            }
        }

        public bool HasKey(string name)
        {
            if (string.IsNullOrEmpty(name))
                throw new Exception("The argument provided is in valid. Please check and try again.");

            return m_Arguments.ContainsKey(name);
        }

        public bool IsValid(string name)
        {
            return HasKey(name) && this[name].Any();
        }


        public ArgumentValue GetArgumentValue(string name)
        {
            if (string.IsNullOrEmpty(name))
                throw new InvalidCastException("The name that was specified was considered invalid or empty.");

            return this.m_Arguments[name];
        }


        /// <summary>
        ///     Parse the arguments from the argument array and split them up by the delimiter.
        /// </summary>
        /// <param name="arguments">The arguments that we are parsing</param>
        /// <param name="delimiter">The delimiter that we are splitting up the values by</param>
        /// <returns>Returns the processed dictionary back out to the user.</returns>
        public static Dictionary<string, string[]> ParseArgumentsToArray(string[] arguments, char delimiter = ' ')
        {
            Dictionary<string, string[]> output = new Dictionary<string, string[]>();

            // This is so fucking lazy.
            var toProcess = ParseArguments(arguments);

            foreach (var kv in toProcess)
            {
                output.Add(kv.Key, kv.Value.Split(delimiter));
            }

            return output;
        }

        /// <summary>
        ///     Parse the arguments in from the run time arguments
        /// </summary>
        /// <param name="arguments">The arguments that we are to parse in</param>
        /// <returns>Returns a dictionary with the arguments as kv pairs</returns>
        public static Dictionary<string, string> ParseArguments(string[] arguments)
        {
            Dictionary<string, string> output = new Dictionary<string, string>();

            if (arguments == null || !arguments.Any())
                return output;

            // iterate over the arguments that are passed through to the function
            for (int i = 0; i < arguments.Length; i++)
            {
                string key = string.Empty, value = string.Empty;

                if (arguments[i].ToCharArray()[0] == '-' && (i + 1) < arguments.Length)
                {
                    key = arguments[i];

                    // Check that the next item in the arguments list is within the limit
                    if (i + 1 < arguments.Length)
                    {
                        for (int j = (i + 1); j < arguments.Length; j++)
                        {
                            if (arguments[j].ToCharArray()[0] == '-')
                                break;

                            // Check whether a value has been assigned to it yet
                            if (!string.IsNullOrEmpty(value))
                                value += " ";

                            value += arguments[j];
                        }
                    }
                    // Add the key pairs of the asset that we are loading
                    output.Add(key.TrimStart(new char[] { '-' }), value);
                }
            }

            return output;
        }

        /// <summary>
        ///     Forcefully inject the arguments into this framework
        /// </summary>
        /// <typeparam name="T">The type of the object that we are dealing with</typeparam>
        /// <param name="graph">The object instance</param>
        public void InjectArguments<T>(T graph)
        {
            if (graph != null)
            {
                // Iterate over the properties and inject the corresponding values that were parsed from the command line
                var properties = graph.GetType().GetProperties().Where(n => n.CustomAttributes.Any());
                foreach (var property in properties)
                {
                    var customAttribute = (CommandLineArgument)property.GetCustomAttributes(typeof(CommandLineArgument), true).First();
                    if (customAttribute != null)
                    {
                        if (this.HasKey(customAttribute.ArgumentName))
                        {
                            var argValue = this.m_Arguments[customAttribute.ArgumentName];
                            object injectionValue = new object();
                            if (argValue != null)
                            {
                                switch (property.PropertyType.ToString())
                                {
                                    case "System.Boolean":
                                        injectionValue = argValue.AsBool;
                                        break;

                                    case "System.String":
                                        injectionValue = argValue.AsString;
                                        break;

                                    case "System.String[]":
                                        injectionValue = argValue.AsRaw;
                                        break;

                                    case "System.Int32":
                                        injectionValue = argValue.AsString;
                                        break;

                                    case "System.Int16":
                                        injectionValue = argValue.AsInt16;
                                        break;
                                }
                            }

                            property.SetValue(graph, injectionValue);
                        }
                    }
                }
            }
        }

        public bool CheckRequired<T>(T instance, out List<string> requiredArguments)
        {
            requiredArguments = new List<string>();
            Type typeInfo = instance.GetType();

            var properties = typeInfo.GetProperties();
            foreach (var customisedProperty in properties.Where(n => n.GetCustomAttributes(true).First().GetType() == typeof(CommandLineArgument)))
            {
                CommandLineArgument argument = (CommandLineArgument)customisedProperty.GetCustomAttributes(true).First();

                if (argument != null && argument.ArgumentRequired && customisedProperty.GetValue(instance) == null)
                {
                    requiredArguments.Add(customisedProperty.Name);
                }
            }

            if (requiredArguments.Any())
                return false;

            return true;
        }

        public void ParseArgsRegex(string arguments)
        {
            if (!string.IsNullOrEmpty(arguments))
            {
                MatchCollection parsedOutput = m_KeyValueRegex.Matches(arguments);
                if (parsedOutput.Count > 0)
                {
                    for (int i = 0; i < parsedOutput.Count; i++)
                    {
                        var groups = parsedOutput[i].Groups;
                        var key = groups["key"].Captures[0].Value;
                        var values = groups["value"].Captures[0].Value.Split(' ');

                        ArgumentValue toAdd = new ArgumentValue(values);

                    }
                }
            }
        }

        public void ParseArgs(string[] args, bool overrideArgs = true)
        {
            if (overrideArgs)
                m_Arguments.Clear();

            Dictionary<string, string[]> parsedOutput = ParseArgumentsToArray(args);
            foreach (var kv in parsedOutput)
            {
                ArgumentValue toAdd = new ArgumentValue(kv.Value);
                m_Arguments.Add(kv.Key, toAdd);
            }
        }
    }
}
