/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImage, UIColor, UIAlertView, MPImageCacheRequest, MPAVItem, MPImageCache, UIActivityIndicatorView, MPAVController, MPVideoBackgroundView, UIView, MPVideoView, MPSwipableView, MPClosedCaptionDisplay, UIView<MPVideoOverlay>, _UIHostedWindow, MPTVOutWindow;

@interface MPVideoViewController : MPViewController <MPVideoControllerProtocol, MPSwipableViewDelegate, MPVideoTransferViewController, UIModalViewDelegate> {
    MPVideoBackgroundView *_backgroundView;
    MPSwipableView *_backstopView;
    BOOL _batteryMonitoringWasEnabled;
    MPClosedCaptionDisplay *_captionView;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    unsigned long long _visibleParts;
    unsigned int _tvOutEnabled : 1;
    unsigned int _allowsTVOutInBackground : 1;
    unsigned int _itemTypeOverride;
    unsigned int _scaleMode;
    unsigned int _scaleModeOverride;
    UIAlertView *_alertSheet;
    MPImageCache *_artworkImageCache;
    MPImageCacheRequest *_artworkImageRequest;
    UIColor *_backstopColor;
    UIActivityIndicatorView *_loadingIndicator;
    MPTVOutWindow *_tvOutWindow;
    unsigned int _backgroundTaskId;
    int _artworkImageStyle;
    UIImage *_posterImage;
    unsigned int _canAnimateControlsOverlay : 1;
    unsigned int _canShowControlsOverlay : 1;
    unsigned int _disableControlsAutohide : 1;
    unsigned int _ownsStatusBar : 1;
    unsigned int _playAfterPop : 1;
    unsigned int _scheduledLoadingIndicator : 1;
    unsigned int _displayPlaybackErrorAlerts : 1;
    unsigned int _allowsDetailScrubbing : 1;
    unsigned int _attemptAutoPlayWhenControlsHidden : 1;
    unsigned int _alwaysAllowHidingControlsOverlay : 1;
    unsigned int _hasShownFirstVideoFrame : 1;
    unsigned int _allowsWirelessPlayback : 1;
    unsigned int _disableAutoRotation : 1;
    unsigned int _inlinePlaybackUsesTVOut : 1;
}

@property BOOL allowsTVOutInBackground;
@property(getter=isTransitioningToFullscreen,readonly) BOOL transitioningToFullscreen;
@property(getter=isTransitioningFromFullscreen,readonly) BOOL transitioningFromFullscreen;
@property(readonly) UIView * artworkImageView;
@property(readonly) BOOL showArtworkInImageView;
@property(readonly) BOOL showArtworkForTVOut;
@property(readonly) BOOL canShowQTAudioOnlyUI;
@property(readonly) UIView<MPVideoOverlay> * videoOverlayViewIfLoaded;
@property id delegate;
@property(retain) MPAVItem * item;
@property int orientation;
@property(retain) MPAVController * player;
@property(readonly) UIView * view;
@property BOOL allowsDetailScrubbing;
@property BOOL allowsWirelessPlayback;
@property BOOL alwaysAllowHidingControlsOverlay;
@property int artworkImageStyle;
@property BOOL attemptAutoPlayWhenControlsHidden;
@property(readonly) UIView * backgroundView;
@property(retain) UIColor * backstopColor;
@property BOOL canAnimateControlsOverlay;
@property(readonly) BOOL canChangeScaleMode;
@property BOOL canShowControlsOverlay;
@property BOOL controlsOverlayVisible;
@property unsigned long long desiredParts;
@property BOOL disableAutoRotation;
@property BOOL disableControlsAutohide;
@property unsigned long long disabledParts;
@property BOOL displayPlaybackErrorAlerts;
@property(readonly) _UIHostedWindow * hostedWindow;
@property(readonly) unsigned int hostedWindowContextID;
@property BOOL inlinePlaybackUsesTVOut;
@property unsigned int itemTypeOverride;
@property(getter=isFullscreen) BOOL fullscreen;
@property BOOL ownsStatusBar;
@property(retain) UIImage * posterImage;
@property unsigned int scaleMode;
@property BOOL TVOutEnabled;
@property(readonly) BOOL viewControllerWillRequestExit;
@property(readonly) UIView<MPVideoOverlay> * videoOverlayView;
@property(readonly) MPVideoView * videoView;
@property unsigned long long visibleParts;
@property BOOL autoPlayWhenLikelyToKeepUp;
@property BOOL inhibitOverlay;

+ (BOOL)supportsFullscreenDisplay;
+ (int)_activityIndicatorViewStyle;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateArtworkImageViewFrameInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)chapterListDidDisappear:(id)arg1;
- (void)chapterList:(id)arg1 selectedChapter:(unsigned int)arg2;
- (BOOL)allowsTVOutInBackground;
- (void)setAllowsTVOutInBackground:(BOOL)arg1;
- (BOOL)displayPlaybackErrorAlerts;
- (void)setControlsOverlayVisible:(BOOL)arg1;
- (BOOL)canAnimateControlsOverlay;
- (void)setBackstopColor:(id)arg1;
- (id)backstopColor;
- (BOOL)attemptAutoPlayWhenControlsHidden;
- (void)exitFullscreen;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)_delayedShowLoading;
- (void)displayVideoViewOnScreen;
- (void)displayVideoViewOnTV;
- (void)_delayedPopForTimeJump;
- (void)backgroundViewDidUpdate;
- (BOOL)canShowQTAudioOnlyUI;
- (void)_updateBackgroundView:(BOOL)arg1;
- (void)_delayedUpdateBackgroundView;
- (void)_exitPlayerForPlaybackError;
- (void)handleScaleModeChange;
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned int)arg1;
- (void)tearDownTVOutWindow;
- (void)_popForTimeJump:(id)arg1;
- (void)_videoView_scaleModeChangedNotification:(id)arg1;
- (void)_hideLoadingIndicator;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)enableAirPlayVideoRoutesIfNecessary;
- (void)_updateProgressControlForItem:(id)arg1;
- (void)_itemDurationDidChange:(id)arg1;
- (void)setScaleMode:(unsigned int)arg1;
- (BOOL)canChangeScaleMode;
- (void)_fixupViewHierarchyIfNecessary;
- (BOOL)_showDestinationPlaceholder;
- (BOOL)_canEnableAirPlayVideoRoutes;
- (id)newArtworkImageView;
- (BOOL)showArtworkInImageView;
- (id)artworkImageView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateArtworkImageViewFrame;
- (BOOL)showArtworkForTVOut;
- (unsigned int)_itemTypeWithActualTypePreference;
- (int)displayArtworkImageStyle;
- (unsigned int)itemTypeOverride;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateFullScreenArtworkImageViewFrame;
- (int)artworkImageStyle;
- (BOOL)isFullscreenForLayoutPurposes;
- (BOOL)isTransitioningFromFullscreen;
- (BOOL)isTransitioningToFullscreen;
- (void)reloadArtworkImageView;
- (id)newAlternateTracksTransition;
- (void)_updateClosedCaptionDisplay;
- (void)unregisterForPlayerNotifications;
- (void)_videoView_validityChangedNotification:(id)arg1;
- (void)_videoView_timedImageMetadataAvailableNotification:(id)arg1;
- (void)_videoView_sizeChangedNotification:(id)arg1;
- (void)_videoView_playbackErrorNotification:(id)arg1;
- (void)_videoView_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)videoView_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (void)_videoView_availableRoutesDidChangeNotification:(id)arg1;
- (void)registerForPlayerNotifications;
- (void)_cancelArtworkImageRequest;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_videoView_batteryStateDidChangeNotification:(id)arg1;
- (void)_videoView_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_videoView_applicationSuspendedNotification:(id)arg1;
- (void)_videoView_resumeEventsOnlyNotification:(id)arg1;
- (void)videoView_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)_videoView_effectiveScaleModeChangedNotification:(id)arg1;
- (id)videoOverlayViewIfLoaded;
- (void)showChaptersController;
- (void)showAlternateTracksController:(id)arg1;
- (void)videoView_itemTypeAvailableNotification:(id)arg1;
- (BOOL)disableControlsAutohide;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (BOOL)ownsStatusBar;
- (unsigned long long)disabledParts;
- (void)setScaleMode:(unsigned int)arg1 animated:(BOOL)arg2;
- (BOOL)allowsDetailScrubbing;
- (void)showChaptersControllerAndFadeViews:(id)arg1;
- (id)createChapterFlipTransition;
- (unsigned long long)disabledPartsForProposedParts:(unsigned long long)arg1;
- (unsigned long long)visiblePartsForProposedParts:(unsigned long long)arg1;
- (BOOL)disableAutoRotation;
- (BOOL)autoPlayWhenLikelyToKeepUp;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)prepareToDisplayVideo;
- (BOOL)viewControllerWillRequestExit;
- (void)setControlsNeedLayout;
- (id)posterImage;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDisableAutoRotation:(BOOL)arg1;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)willChangeToInterfaceOrientation:(int)arg1;
- (void)toggleScaleMode:(BOOL)arg1;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (void)setArtworkImageStyle:(int)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setClosedCaptions:(id)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (unsigned int)hostedWindowContextID;
- (id)hostedWindow;
- (BOOL)inlinePlaybackUsesTVOut;
- (void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setDisplayPlaybackErrorAlerts:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
- (BOOL)alwaysAllowHidingControlsOverlay;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (unsigned long long)desiredParts;
- (unsigned long long)visibleParts;
- (id)videoOverlayView;
- (BOOL)controlsOverlayVisible;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)displayVideoView;
- (BOOL)canShowControlsOverlay;
- (void)setItemTypeOverride:(unsigned int)arg1;
- (void)setItem:(id)arg1;
- (BOOL)TVOutEnabled;
- (BOOL)allowsWirelessPlayback;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (unsigned int)scaleMode;
- (void)setScaleModeOverride:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1;
- (BOOL)isFullscreen;
- (id)videoView;
- (void)_endBackgroundTask;
- (void)setPlayer:(id)arg1;
- (int)statusBarStyle;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeChildViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)backgroundView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)isStatusBarHidden;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end