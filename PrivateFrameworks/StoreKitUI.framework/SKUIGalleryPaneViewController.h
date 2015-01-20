/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIEmbeddedMediaView, SKUIMediaComponent;

@interface SKUIGalleryPaneViewController : UIViewController {
    SKUIMediaComponent *_component;
    long long _galleryIndex;
}

@property(readonly) SKUIMediaComponent * component;
@property(readonly) long long galleryIndex;
@property(readonly) SKUIEmbeddedMediaView * mediaView;

- (void).cxx_destruct;
- (id)component;
- (long long)galleryIndex;
- (id)initWithMediaComponent:(id)arg1 galleryIndex:(long long)arg2;
- (id)mediaView;

@end