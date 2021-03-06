/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBLockOverlayStyleProperties : NSObject {
    float  _blurRadius;
    UIColor * _primaryColor;
    int  _quality;
    UIColor * _secondaryColor;
    _UIBackdropViewSettings * _settings;
    unsigned int  _style;
    float  _tintAlpha;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) float blurRadius;
@property (nonatomic, readonly) int graphicsQuality;
@property (nonatomic, readonly) unsigned int style;
@property (nonatomic, readonly) float tintAlpha;
@property (nonatomic, readonly) UIColor *tintColor;

- (void).cxx_destruct;
- (void)_configure;
- (id)_settingsForStyle;
- (id)_stringForQuality;
- (id)_stringForStyle;
- (float)blurRadius;
- (id)description;
- (int)graphicsQuality;
- (id)initWithStyle:(unsigned int)arg1 quality:(int)arg2;
- (unsigned int)style;
- (float)tintAlpha;
- (id)tintColor;

@end
