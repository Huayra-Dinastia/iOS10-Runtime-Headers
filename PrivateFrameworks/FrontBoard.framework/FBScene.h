/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class FBWindowContextManager, FBSDisplay, FBProcess, <FBSceneClientProvider>, FBSSceneSettings, FBSMutableSceneSettings, NSString, <FBSceneClient>, FBWindowContextHostManager, <FBSceneBoundsDelegate>, <FBSceneDelegate>, FBSSceneClientSettings;

@interface FBScene : NSObject <FBSceneHost> {
    FBWindowContextManager *_contextManager;
    FBWindowContextHostManager *_contextHostManager;
    bool_valid;
    <FBSceneDelegate> *_delegate;
    <FBSceneClient> *_client;
    <FBSceneClientProvider> *_clientProvider;
    FBProcess *_clientProcess;
    NSString *_identifier;
    FBSDisplay *_display;
    FBSMutableSceneSettings *_mutableSettings;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    <FBSceneBoundsDelegate> *_boundsDelegate;
    unsigned long long _transactionID;
    bool_lockedForMutation;
}

@property(copy,readonly) NSString * identifier;
@property(retain,readonly) FBSDisplay * display;
@property(retain,readonly) FBWindowContextManager * contextManager;
@property(retain,readonly) FBWindowContextHostManager * contextHostManager;
@property(retain,readonly) FBSSceneSettings * settings;
@property(retain,readonly) FBSSceneClientSettings * clientSettings;
@property(retain,readonly) FBProcess * clientProcess;
@property(getter=isValid,readonly) bool valid;
@property <FBSceneDelegate> * delegate;
@property(retain,readonly) <FBSceneClient> * client;
@property(retain,readonly) <FBSceneClientProvider> * clientProvider;
@property(retain,readonly) FBSMutableSceneSettings * mutableSettings;
@property(readonly) unsigned long long _transactionID;
@property(setter=_setLockedForMutation:) bool _lockedForMutation;
@property(setter=_setBoundsDelegate:) <FBSceneBoundsDelegate> * _boundsDelegate;


- (id)_boundsDelegate;
- (void)_handleSceneClientMessage:(id)arg1 withBlock:(id)arg2;
- (void)_invalidateWithTransitionContext:(id)arg1;
- (void)_applyMutableSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(id)arg3;
- (unsigned long long)_incrementTransactionID;
- (void)_setLockedForMutation:(bool)arg1;
- (bool)_lockedForMutation;
- (id)mutableSettings;
- (id)initWithIdentifier:(id)arg1 display:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4;
- (id)contextHostManager;
- (unsigned long long)_transactionID;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)client:(id)arg1 detachContext:(id)arg2;
- (void)client:(id)arg1 updateContext:(id)arg2;
- (void)client:(id)arg1 attachContext:(id)arg2;
- (void)updateSettingsWithBlock:(id)arg1;
- (id)clientProcess;
- (id)clientProvider;
- (void)_setBoundsDelegate:(id)arg1;
- (id)contextManager;
- (id)settings;
- (id)identifier;
- (id)display;
- (void)sendActions:(id)arg1;
- (id)_descriptionWithMultilinePrefix:(id)arg1;
- (id)clientSettings;
- (id)debugDescription;
- (void)setDelegate:(id)arg1;
- (bool)isValid;
- (id)delegate;
- (id)client;
- (void)dealloc;
- (id)description;

@end