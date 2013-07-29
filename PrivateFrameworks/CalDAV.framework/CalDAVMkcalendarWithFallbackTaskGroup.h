/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSURL, NSSet, NSDictionary;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup  {
    NSURL *_url;
    BOOL _shouldSupportVEVENT;
    BOOL _shouldSupportVTODO;
    NSSet *_primaryElements;
    NSSet *_fallbackElements;
    NSDictionary *_headersToOverride;
    NSDictionary *_responseHeaders;
}

@property BOOL shouldSupportVEVENT;
@property BOOL shouldSupportVTODO;
@property(retain) NSDictionary * headersToOverride;
@property(retain) NSDictionary * responseHeaders;


- (void)setHeadersToOverride:(id)arg1;
- (void)setShouldSupportVTODO:(BOOL)arg1;
- (BOOL)shouldSupportVTODO;
- (void)setShouldSupportVEVENT:(BOOL)arg1;
- (BOOL)shouldSupportVEVENT;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5;
- (void)setResponseHeaders:(id)arg1;
- (void)_mkcalendarAfterFailureCount:(unsigned int)arg1;
- (id)headersToOverride;
- (id)responseHeaders;
- (void)startTaskGroup;
- (void)dealloc;

@end