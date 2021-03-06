/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFComposeAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {
    NSMutableDictionary * _attachmentsData;
    NSMutableDictionary * _attachmentsPasteboardData;
    NSCache * _attachmentsPlaceholderData;
    NSMutableDictionary * _attachmentsUndoData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_dataForAttachment:(id)arg1;
- (void)addData:(id)arg1 forContentID:(id)arg2;
- (id)dataForContentID:(id)arg1;
- (void)dealloc;
- (void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(id /* block */)arg3;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)initWithData:(id)arg1 forContentID:(id)arg2;
- (id)messageForAttachment:(id)arg1;
- (id)rawDataForContentID:(id)arg1;
- (void)recordPasteboardDataForAttachments:(id)arg1;
- (void)recordUndoDataForAttachments:(id)arg1;
- (void)removeDataForAttachment:(id)arg1;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end
