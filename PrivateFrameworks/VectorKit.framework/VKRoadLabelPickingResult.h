/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadLabelPickingResult : NSObject {
    float _closestApproach;
    struct CGVector { 
        float dx; 
        float dy; 
    } _direction;
    VKLabelFeatureMarker *_labelFeatureMarker;
}

@property (nonatomic, readonly) float closestApproach;
@property (nonatomic, readonly) struct CGVector { float x1; float x2; } direction;
@property (nonatomic, readonly) VKLabelFeatureMarker *labelFeatureMarker;
@property (nonatomic, readonly) NSString *name;

- (float)closestApproach;
- (void)dealloc;
- (id)description;
- (struct CGVector { float x1; float x2; })direction;
- (id)initWithFeature:(id)arg1 closestApproach:(float)arg2 direction:(struct CGVector { float x1; float x2; })arg3;
- (id)labelFeatureMarker;
- (id)name;

@end