using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ArcManagedFBX.Shared.Time
{
    public static class DateTimeHelper
    {
        public static string CompactDateTime
        {
            get
            {
                return DateTime.UtcNow.ToString("ddMMyyyyHHmmss");
            }
        }

        public static string CompactDate
        {
            get
            {
                return DateTime.UtcNow.ToString("ddMMyyyy");
            }
        }

        public static string DateFormatted
        {
            get
            {
                return DateTime.UtcNow.ToString("dd/MM/yyyy");
            }
        }

        public static string DateTimeFormatted
        {
            get
            {
                return DateTime.UtcNow.ToString("dd/MM/yyyy HH:mm:ss");
            }
        }

        public static string ConvertToNiceDate(DateTime instance, bool compact = false)
        {
            return instance.ToString("dd/MM/yyyy");
        }

        public static string ConvertToNiceDateTime(DateTime instance, bool compact = false)
        {
            return instance.ToString("dd/MM/yyyy HH:mm:ss");
        }

        public static string ConvertToCompactDateTime(DateTime instance)
        {
            return instance.ToString("ddMMyyyyHHmmss");
        }

        public static string ConvertToCompactDate(DateTime instance)
        {
            return instance.ToString("ddMMyyyy");
        }
    }
    
}
