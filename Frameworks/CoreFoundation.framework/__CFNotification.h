/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __CFNotification : NSNotification <NSCopying> {
    id _name;
    id _object;
    id _userInfo;
    BOOL _fouSemantics;
    BOOL _dyingObject;
}


- (void)finalize;
- (id)object;
- (id)name;
- (id)initWithName:(struct __CFString { }*)arg1 object:(const void*)arg2 userInfo:(struct __CFDictionary { }*)arg3 foundation:(BOOL)arg4;
- (id)userInfo;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end