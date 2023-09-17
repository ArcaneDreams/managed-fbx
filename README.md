![arcmanagedfbx](http://i.imgur.com/br4KwNr.png)
====
## ⚠️ Archived ⚠️

**This project is no longer being supported but it will remain publicly available should you wish to continue using or maintaining it as part of your own projects.**

### Microsoft support for C++ and Common-Language Interface

The purpose of this project was to provide a wrapper and C# language support for the Autodesk FBX SDK. This was achieved by using the Common-Language Interface, an intermediary language that provided an interface for using native (pure C++) types with C# without having to rely on [platform-invocation services](https://learn.microsoft.com/en-us/dotnet/standard/native-interop/pinvoke).

[It is unclear whether Microsoft will continue to support C++/CLI in the future.](https://devblogs.microsoft.com/cppblog/cpp20-support-comes-to-cpp-cli/) Currently it only works on Windows with .NET Core and the later versions of the .NET Framework. It will not compile when targeting other platforms such as macOS and Linux.

It would appear there are other methods and code-generators that can automate a lot of the work required for writing managed wrappers that make native calls to underlying shared-objects (`.so`) or dynamic link libraries (`.dll`), this including the Autodesk SDK's DLLs or SOs (platform depending).

---

## Description
A managed common-language runtime wrapper for the Autodesk FBX SDK. Enables developers writing in C# or any other .NET supported language to work with the FBX SDK, without having to use any other aspect of the CLR's platform invocation services.

## Features
* Import and save scenes.
* Modify cameras, attributes, nodes and more.
* Comprehensive one-to-one type wrapper of most of the documented types and interfaces.

## Roadmap
- [ ] Integrate support for FBX SDK 2019.5
- [ ] Upgrade to Visual Studio 2019
- [ ] Add support for .NET Core 3.1 (only compatible with Windows)

## Requirements
* [Visual Studio 2012 with Update 4](http://www.microsoft.com/en-gb/download/details.aspx?id=39305)
* [Autodesk FBX SDK 2015](https://www.autodesk.com/developer-network/platform-technologies/fbx-sdk-2015)

## Purpose
* To be used in conjunction with MonoGame for importing the FBX file asset type and retrieving more indepth information about files imported through the API.

## Contributors
This project is looking for frequent contributors. It has proven to be popular, but unfortunately I don't have as much spare time as I would like to support this project.

**Email:** [github@arcanedreams.com](mailto:github@arcanedreams.com)

## Shoutout
https://github.com/returnString/ManagedFBX
