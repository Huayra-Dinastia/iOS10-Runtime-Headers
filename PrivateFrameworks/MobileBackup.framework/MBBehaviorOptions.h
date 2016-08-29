/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBBehaviorOptions : NSObject {
    NSMutableDictionary * _cachedPrefs;
    NSObject<OS_dispatch_queue> * _cachedPrefsQueue;
    MBConnection * _conn;
}

@property (nonatomic) bool backupFromLocalSnapshot;
@property (nonatomic, retain) NSMutableDictionary *cachedPrefs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cachedPrefsQueue;
@property (nonatomic, copy) NSString *cloudKitContainerName;
@property (nonatomic, retain) MBConnection *conn;
@property (nonatomic) long long manifestPageSize;
@property (nonatomic) long long maxBatchCount;
@property (nonatomic, readonly) long long maxBatchFetchAssetSize;
@property (nonatomic, readonly) long long maxBatchSaveAssetSize;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) long long maxDomainsToBackup;
@property (nonatomic, copy) NSString *minimumBuildVersionForFullBackup;
@property (nonatomic) long long recordSaveAttempts;
@property (nonatomic) long long sqlBatchCount;
@property (nonatomic) double sqlBatchTime;
@property (nonatomic) bool sqlTrace;
@property (nonatomic) bool useBackgroundOperationsForBackup;
@property (nonatomic) bool warnForLateiTunesBackups;

+ (id)sharedOptions;

- (void).cxx_destruct;
- (id)_behaviorContainerOptionForKey:(id)arg1;
- (id)_behaviorOptionForKey:(id)arg1;
- (id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (bool)_getBoolOptionForKey:(id)arg1 defaultValue:(bool)arg2;
- (double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2;
- (int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2;
- (id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (void)_startListeningForNotifications;
- (bool)backupFromLocalSnapshot;
- (id)cachedPrefs;
- (id)cachedPrefsQueue;
- (id)cloudKitContainerName;
- (id)conn;
- (id)init;
- (long long)manifestPageSize;
- (long long)maxBatchCount;
- (long long)maxBatchFetchAssetSize;
- (long long)maxBatchSaveAssetSize;
- (long long)maxBatchSize;
- (long long)maxDomainsToBackup;
- (id)minimumBuildVersionForFullBackup;
- (long long)recordSaveAttempts;
- (void)setBackupFromLocalSnapshot:(bool)arg1;
- (void)setCachedPrefs:(id)arg1;
- (void)setCachedPrefsQueue:(id)arg1;
- (void)setCloudKitContainerName:(id)arg1;
- (void)setConn:(id)arg1;
- (void)setManifestPageSize:(long long)arg1;
- (void)setMaxBatchCount:(long long)arg1;
- (void)setMaxBatchSize:(long long)arg1;
- (void)setMaxDomainsToBackup:(long long)arg1;
- (void)setMinimumBuildVersionForFullBackup:(id)arg1;
- (void)setRecordSaveAttempts:(long long)arg1;
- (void)setSQLTrace:(bool)arg1;
- (void)setSqlBatchCount:(long long)arg1;
- (void)setSqlBatchTime:(double)arg1;
- (void)setUseBackgroundOperationsForBackup:(bool)arg1;
- (void)setWarnForLateiTunesBackups:(bool)arg1;
- (void)setmaxBatchFetchAssetSize:(long long)arg1;
- (void)setmaxBatchSaveAssetSize:(long long)arg1;
- (long long)sqlBatchCount;
- (double)sqlBatchTime;
- (bool)sqlTrace;
- (bool)useBackgroundOperationsForBackup;
- (bool)warnForLateiTunesBackups;

@end