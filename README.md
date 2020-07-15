# D2BS
D2BS, short for Diablo 2 Botting System, uses the open source Javascript engine named 'SpiderMonkey' to execute user scripts inside of Diablo 2.

# API
[GlobalFunctions](doc/api/globalFunctions.md)

[Classes](doc/api/classes.md)


# SpiderMonkey

## Downloading
<https://hg.mozilla.org/releases/mozilla-release/archive/FIREFOX_RELEASE_22.0.zip>


## Other Required Tools
<https://ftp.mozilla.org/pub/mozilla/libraries/win32/MozillaBuildSetup-1.11.0.exe>


## Building
```
C:\mozilla-build\start-shell-msvc2010.bat

cd mozilla-release-FIREFOX_RELEASE_22.0/js/src
autoreconf-2.13 -i
```

### Non-developer (optimized) build
```
# This name should end with "_OPT.OBJ" to make the version control system ignore it.
mkdir build_OPT.OBJ
cd build_OPT.OBJ
# Build static library
../configure --disable-shared-js --disable-tests --enable-gczeal
# Use "mozmake" on Windows
mozmake
ls -al dist
```

### Developer (debug) build
```
# This name should end with "_DBG.OBJ" to make the version control system ignore it.
mkdir build_DBG.OBJ
cd build_DBG.OBJ
# Build shared library
../configure --disable-tests --enable-gczeal --enable-debug --disable-optimize
# Use "mozmake" on Windows
mozmake
ls -al dist
```

## Links
<https://developer.mozilla.org/en-US/docs/Mozilla/Projects/SpiderMonkey/Releases>

<https://developer.mozilla.org/en-US/docs/Mozilla/Projects/SpiderMonkey/Build_Documentation>

<https://firefox-source-docs.mozilla.org/setup/windows_build.html>
