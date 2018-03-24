# Getting Started

## WorldBrowser iOS SDK's

## Introduction

The WorldBrowser iOS SDK enables detecting data registered with ContextGrid using machine learning and augmented reality. 

The SDK is designed for WorldBrowser partners who are developing their own iOS apps. The SDK provide native integration to detecting object within these apps that is easy to integrate and provides a high performance, augmented reality experience.

##Features 
WorldBrowser iOS SDK broadly offers following features.

### WorldBrowser.framework

+ Detecting nearby places of interest that are registered on ContextGrid platform
+ Managing Augmented Reality experience within a place to detect registered microlocations
+ Leveraging SDK for execution of actions assigned via ContextGrid portal 
+ SDK supports Comany Key integration to simplyfy API calls
+ Swift Version 3.1 Support with Xcode 9.0
+ IOS version 11.0 support with xcode 9.0

## Example Project
An example project is available via  manual-inclusion to try out and familiarize yourself with the WorldBrowser iOS SDK. This project comes bundled with the SDK.

## Example App Requirements

+ Xcode 9.0 or higher.

### Prerequisites to integrating with WorldBrowser.
+ You need to get company api key from [ContextGrid](https://app.contextgrid.com/).

Note: Please ensure all the requirements mentioned above are met before proceeding.

#### Manual inclusion
If you’d like to download and maintain the SDK manually, please follow the steps listed below:
+ Clone it using following command
~~~{.m}
$ git clone --recursive https://github.com/ContextGrid/WorldBrowser-iOS.git
$ open WorldBrowser-iOS
~~~
+ Navigate to the WorldBrowser "Framework" folder drag into your existing Xcode project
+ In Xcode, go to your app's target settings. Under the `Build Phases` tab, expand the `Link Binary With Libraries` section.
+ Include the following framework:
- `WorldBrowser.framework`
+ In Xcode, go to your app's target settings. Under the `General` tab, expand the `Embedded Binaries` section.
+ Include the following framework:
- `WorldBrowser.framework`

#### Adding dependencies (required when including the SDK as a Submodule  including it manual)
- `CoreMedia.framework`

#### Next

After installation, you must import the WorldBrowser SDK in your project by adding this:

Swift
~~~{.m}
import WorldBrowser
~~~

Objective-C
~~~{.m}
#import <WorldBrowser/WorldBrowser.h>
~~~

to the files in which you want to use this framework.

Once you prepared, continue to have a look at the Documentation to see how to use WorldBrowser.

## Documentation
API documentation is hosted on our [WorldBrowser Developer Guide](https://app.contextgrid.com/docs/#introduction)

LICENSE
-------
LICENSE file not required.
