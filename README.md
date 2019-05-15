# ofxDateTimeString

## Overview

This is an addon for openFrameworks.
I made it to make date and time string easily.
For example, date to string "2019-03-31".

## Requirement

ofxDateTimeString doesn't depend other addons.

## Tested system

- OSX Mojave + Xcode + of0.10.1
- Windows 10 + VS2017 +  of0.10.1 .

I think compatible almost all versions, because it's simple addon.

## Usage

1. Add this addon.
2. Include `ofxDateTimeString.h`.
3. Write some static method.

For example
```cpp
ofxDateTimeString::getDate(); // date "2019-03-31"
ofxDateTimeString::getDate("/"); // date "2019/03/31"
ofxDateTimeString::getDateTime(); // date and time "2019-03-31_23-59-59"
ofxDateTimeString::getDateTimeMillis(); // date and time with milli seconds "2019-03-31_23-59-59_999"
```

