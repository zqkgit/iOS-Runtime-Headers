/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse {
    BOOL  _supportsTaskSuspension;
    BOOL  _supportsTaskSuspensionOnLock;
}

@property (nonatomic) BOOL supportsTaskSuspension;
@property (nonatomic) BOOL supportsTaskSuspensionOnLock;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setSupportsTaskSuspension:(BOOL)arg1;
- (void)setSupportsTaskSuspensionOnLock:(BOOL)arg1;
- (BOOL)supportsTaskSuspension;
- (BOOL)supportsTaskSuspensionOnLock;

@end
