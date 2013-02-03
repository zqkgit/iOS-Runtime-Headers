/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableSet;

@interface UIStatusBarPublisher : NSObject {
    struct __CFMachPort { } *_machPort;
    NSMutableSet *_statusBarItems;
    NSInteger _styleOverrides;
}

- (void)addStatusBarItem:(NSInteger)arg1;
- (void)addStyleOverrides:(NSInteger)arg1;
- (void)dealloc;
- (id)initWithCFMachPort:(struct __CFMachPort { }*)arg1;
- (NSUInteger)publisherPort;
- (void)removeStatusBarItem:(NSInteger)arg1;
- (void)removeStyleOverrides:(NSInteger)arg1;
- (id)statusBarItems;
- (NSInteger)styleOverrides;

@end