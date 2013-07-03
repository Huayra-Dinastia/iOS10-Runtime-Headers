/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <GEOTileServerProxyDelegate>, NSObject<OS_dispatch_queue>;

@interface GEOTileServerProxy : NSObject  {
    <GEOTileServerProxyDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQ;
}

@property <GEOTileServerProxyDelegate> * delegate;
@property NSObject<OS_dispatch_queue> * delegateQ;


- (id)delegateQ;
- (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)flushPendingWrites;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)loadTiles:(id)arg1 priorities:(unsigned int*)arg2 options:(unsigned int)arg3 client:(id)arg4;
- (void)setDelegateQ:(id)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)cancel:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)close;
- (void)open;
- (id)delegate;

@end