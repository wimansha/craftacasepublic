# CraftacasePublic

[![CI Status](http://img.shields.io/travis/Wimansha Chathuranga/CraftacasePublic.svg?style=flat)](https://travis-ci.org/Wimansha Chathuranga/CraftacasePublic)
[![Version](https://img.shields.io/cocoapods/v/CraftacasePublic.svg?style=flat)](http://cocoapods.org/pods/CraftacasePublic)
[![License](https://img.shields.io/cocoapods/l/CraftacasePublic.svg?style=flat)](http://cocoapods.org/pods/CraftacasePublic)
[![Platform](https://img.shields.io/cocoapods/p/CraftacasePublic.svg?style=flat)](http://cocoapods.org/pods/CraftacasePublic)

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

works on iOS 8+

## Installation

CraftacasePublic is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following lines to your Podfile:

```ruby
source 'https://github.com/wimansha/wimansha-podspecs'
pod "CraftacasePublic"
```

## Add New Pod Repo

```ruby
pod repo add wimansha-podspecs https://github.com/wimansha/wimansha-podspecs.git
```

## Usage

Import craftacasepublic.h

```objective-c
#import <craftacasepublic/craftacasepublic.h>
```

Present ACCLibNavigationController instance with an Artwork image.

```objective-c
UIImage *image = [UIImage imageNamed:@"Artwork"];
ACCLibNavigationController *viewController = [[ACCLibNavigationController alloc] initWithImage:image];
viewController.libNavigationControllerDelegate = self;
[self presentViewController:viewController animated:YES completion:nil];
```
Add following "Exception Domains" to "App Transport Security Settings" in info.Plist

craftacase.com, akamaihd.net, facebook.com, fbcdn.net

```xml
<key>NSAppTransportSecurity</key>
	<dict>
		<key>NSExceptionDomains</key>
		<dict>
			<key>akamaihd.net</key>
			<dict>
				<key>NSIncludesSubdomains</key>
				<true/>
				<key>NSThirdPartyExceptionRequiresForwardSecrecy</key>
				<false/>
			</dict>
			<key>craftacase.com</key>
			<dict>
				<key>NSExceptionAllowsInsecureHTTPLoads</key>
				<true/>
				<key>NSIncludesSubdomains</key>
				<true/>
				<key>NSThirdPartyExceptionRequiresForwardSecrecy</key>
				<false/>
			</dict>
			<key>facebook.com</key>
			<dict>
				<key>NSIncludesSubdomains</key>
				<true/>
				<key>NSThirdPartyExceptionRequiresForwardSecrecy</key>
				<false/>
			</dict>
			<key>fbcdn.net</key>
			<dict>
				<key>NSIncludesSubdomains</key>
				<true/>
				<key>NSThirdPartyExceptionRequiresForwardSecrecy</key>
				<false/>
			</dict>
		</dict>
	</dict>
  ```

## Author

Wimansha Chathuranga, wimansha@4axissolutions.com

## License

CraftacasePublic is available under the MIT license. See the LICENSE file for more info.
