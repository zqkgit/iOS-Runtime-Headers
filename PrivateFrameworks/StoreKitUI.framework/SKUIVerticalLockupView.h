/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIVerticalLockupView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIPerspectiveView, SKUIViewElementView> {
    NSHashTable * _artworkRelatedChildViewElementViews;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInset;
    NSMapTable * _imageViewToImageResourceCacheKey;
    NSMapTable * _lineSpacings;
    SKUILockupViewElement * _lockupElement;
    float  _opacityOfViewsOtherThanProductImageView;
    float  _productImageAdjustedWidth;
    SKUISizeValue * _productImageBoundingSize;
    UIView * _productImageView;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _productImageViewOriginalTransform;
    int  _sizingStyle;
    NSMapTable * _topInsets;
    NSMapTable * _viewElementViews;
    float  _zoomingImageAlpha;
    float  _zoomingImageWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) float opacityOfViewsOtherThanProductImageView;
@property (nonatomic) int sizingStyle;
@property (readonly) Class superclass;
@property (nonatomic) float zoomingImageAlpha;
@property (nonatomic) float zoomingImageWidth;

+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (float)_bottomInsetForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (float)_topInsetForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (float)maximumPerspectiveHeightForSize:(struct CGSize { float x1; float x2; })arg1;
+ (struct CGSize { float x1; float x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (float)opacityOfViewsOtherThanProductImageView;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setOpacityOfViewsOtherThanProductImageView:(float)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setSizingStyle:(int)arg1;
- (void)setVanishingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setZoomingImageAlpha:(float)arg1;
- (void)setZoomingImageWidth:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)sizingStyle;
- (void)updateForChangedDistanceFromVanishingPoint;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (float)zoomingImageAlpha;
- (float)zoomingImageWidth;

@end
