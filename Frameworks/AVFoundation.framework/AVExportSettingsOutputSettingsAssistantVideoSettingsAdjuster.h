/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSDictionary;

@interface AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster : NSObject <AVOutputSettingsAssistantVideoSettingsAdjuster> {
    NSString *_outputSettingsPresetIdentifier;
    NSDictionary *_exportSettings;
}


- (id)initWithOutputSettingsPreset:(id)arg1;
- (int)averageBitRateForSourceDimensions:(struct CGSize { float x1; float x2; })arg1 andTargetFrameRate:(float)arg2;
- (void)dealloc;

@end