/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFontCacheKey : NSObject {
    NSString *_fontName;
    float _fontSize;
    unsigned int _hash;
}

@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) float fontSize;

+ (id)cacheKeyWithFontName:(id)arg1 size:(float)arg2;

- (void)dealloc;
- (id)fontName;
- (float)fontSize;
- (unsigned int)hash;
- (id)initWithFontName:(id)arg1 size:(float)arg2;
- (BOOL)isEqual:(id)arg1;

@end