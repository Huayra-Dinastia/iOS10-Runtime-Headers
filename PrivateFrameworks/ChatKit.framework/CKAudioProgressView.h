/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioProgressView : CKBalloonImageView {
    BOOL _color;
    IMManualUpdater *_displayUpdater;
    BOOL _played;
    BOOL _playing;
    float _progress;
    int _style;
}

@property (nonatomic) BOOL color;
@property (nonatomic, retain) IMManualUpdater *displayUpdater;
@property (getter=isPlayed, nonatomic) BOOL played;
@property (getter=isPlaying, nonatomic) BOOL playing;
@property (nonatomic) float progress;
@property (nonatomic) int style;

+ (id)imageWithType:(unsigned char)arg1 color:(BOOL)arg2;
+ (float)progressForTime:(double)arg1 duration:(double)arg2;
+ (id)templateImageWithControlImage:(id)arg1;
+ (id)templateImageWithType:(unsigned char)arg1;

- (BOOL)color;
- (void)dealloc;
- (id)displayUpdater;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isPlayed;
- (BOOL)isPlaying;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (float)progress;
- (void)setColor:(BOOL)arg1;
- (void)setDisplayUpdater:(id)arg1;
- (void)setNeedsPrepareForDisplay;
- (void)setPlayed:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setProgress:(float)arg1;
- (void)setStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;

@end