/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndexQuery : NSObject <MDSearchQueryDelegate, MFCancelable, NSProgressReporting> {
    unsigned int  _cancellableQuery;
    NSProgress * _internalProgress;
    NSLock * _lock;
    NSProgress * _progress;
    MDSearchQuery * _query;
    NSString * _queryString;
    NSMutableArray * _resultsBlocks;
    MFPromise * _resultsPromise;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly, copy) NSString *queryString;
@property (readonly) Class superclass;

+ (id)_modifierStringFromModifiers:(unsigned long long)arg1;
+ (id)_operandStringForOperand:(long long)arg1;
+ (id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3;
+ (id)queryStringByJoiningQueries:(id)arg1 withOperand:(long long)arg2;
+ (id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3;
+ (id)queryWithString:(id)arg1 options:(id)arg2;
+ (id)searchWordsForPhrase:(id)arg1;

- (void)_cancel;
- (void)_completed;
- (void)_failedWithError:(id)arg1;
- (void)_foundItems:(id)arg1;
- (void)_performClientWork:(id /* block */)arg1;
- (void)_removeAllResultsBlocks;
- (void)addCompletionBlock:(id /* block */)arg1;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addResultsBlock:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithQueryString:(id)arg1 options:(id)arg2;
- (id)progress;
- (id)queryString;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)start;
- (id)truncatedDescription;

@end
