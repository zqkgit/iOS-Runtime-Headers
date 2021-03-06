/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoTileBadgeView : UIView {
    UIView * __backgroundView;
    UIImageView * __badgeImageView;
    UIButton * __button;
    UIImageView * __photoIrisBadgeImageView;
    UILabel * __textLabel;
    BOOL  _enabled;
    BOOL  _isIrisBadgeHidden;
    BOOL  _isOverContent;
    int  _numberOfPhotos;
    BOOL  _selected;
    int  _style;
}

@property (nonatomic, readonly) UIView *_backgroundView;
@property (nonatomic, readonly) UIImageView *_badgeImageView;
@property (setter=_setButton:, nonatomic, retain) UIButton *_button;
@property (nonatomic, readonly) UIImageView *_photoIrisBadgeImageView;
@property (nonatomic, readonly) UILabel *_textLabel;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (setter=setIrisBadgeHidden:, nonatomic) BOOL isIrisBadgeHidden;
@property (setter=setOverContent:, nonatomic) BOOL isOverContent;
@property (nonatomic) int numberOfPhotos;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic) int style;

- (id)_backgroundView;
- (id)_badgeImageView;
- (id)_button;
- (void)_commonPLPhotoTileBadgeViewInitialization:(int)arg1;
- (id)_photoIrisBadgeImageView;
- (void)_setButton:(id)arg1;
- (id)_textLabel;
- (void)_updateBadgeImage;
- (void)_updateBadgeText;
- (void)_updatePhotoIrisBadgeAppearanceAnimated:(BOOL)arg1;
- (void)_updateSubviewsForStyle;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (BOOL)isEnabled;
- (BOOL)isIrisBadgeHidden;
- (BOOL)isOverContent;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (int)numberOfPhotos;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setAlpha:(float)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setIrisBadgeHidden:(BOOL)arg1;
- (void)setIrisBadgeHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNumberOfPhotos:(int)arg1;
- (void)setOverContent:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;

@end
