ICTKit
============

![License](https://cocoapod-badges.herokuapp.com/l/ICTKit/badge.(png|svg))
![Platforms](https://cocoapod-badges.herokuapp.com/p/ICTKit/badge.png)
[![Cocoapod Latest Version](http://img.shields.io/cocoapods/v/ICTKit.svg?style=flat)](https://cocoapods.org/?q=ICTKit)
[![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)

<p align="left" >
  <img src="https://github.com/ngocbinh02/ICTKit/blob/master/demo.jpeg?raw=true" alt="ICTKit" title="ICTKit">
</p>

### Purpose

The Foundation framework defines a base layer of Objective-C classes. In addition to providing a set of useful primitive object classes, it introduces several paradigms that define functionality not covered by the Objective-C language. The Foundation framework is designed with these goals in mind:

Provide a small set of basic utility classes.
Make software development easier by introducing consistent conventions for things such as deallocation.
Support Unicode strings, object persistence, and object distribution.
Provide a level of OS independence, to enhance portability.
The Foundation framework includes the root object class, classes representing basic data types such as strings and byte arrays, collection classes for storing other objects, classes representing system information such as dates, and classes representing communication ports. See Cocoa Objective-C Hierarchy for Foundation for a list of those classes that make up the Foundation framework.

The Foundation framework introduces several paradigms to avoid confusion in common situations, and to introduce a level of consistency across class hierarchies. This consistency is done with some standard policies, such as that for object ownership (that is, who is responsible for disposing of objects), and with abstract classes like NSEnumerator. These new paradigms reduce the number of special and exceptional cases in an API and allow you to code more efficiently by reusing the same mechanisms with various kinds of objects.

### Author: [Harry Tran](https://github.com/ichitech/).

## Adding ICTKitto Your Project

### CocoaPods

[CocoaPods](http://cocoapods.org) is a dependency manager for Objective-C, which automates and simplifies the process of using 3rd-party libraries like ICTKit in your projects.

```ruby
platform :ios, '8.0'
pod "ICTKit"
```

### Source Files

Alternatively you can directly add the *ICTKit.framework* folder to your project.

## Usage

### Import to your project

#### Objective-C
```objective-c

#import <ICTKit/Kit.h>
```

#### Swift
##### Please import to the Swift Bridging Header file. Folow [some steps](https://mycodetips.com/ios/manually-adding-swift-bridging-header-1290.html) to create this file.
```swift

#import <ICTKit/Kit.h>
```

## Contact
Have a question or an issue about ICTKit? Create an [issue](https://github.com/ichitech/ICTKit/issues/new)!

## License
ICTKit is available under the MIT license. See the LICENSE file for more info.

## Remark
This is my first iOS plugin project on github, please accept my apologize if any bad coding.
