/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class FBProcessManager, BSWatchdog, FBProcess, NSString;

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessObserver> {
    FBProcessManager *_manager;
    FBProcess *_process;
    double _timeout;
    BSWatchdog *_watchdog;
}

@property(retain,readonly) FBProcess * process;
@property(readonly) double timeout;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithProcess:(id)arg1;
- (id)initWithProcess:(id)arg1 timeout:(double)arg2;
- (void)processDidExit:(id)arg1;
- (id)process;
- (double)timeout;
- (void)_didComplete;
- (id)_customizedDescriptionProperties;
- (void)_begin;
- (void)dealloc;

@end