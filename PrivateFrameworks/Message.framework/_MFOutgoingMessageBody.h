/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer> {
    MFBufferedDataConsumer * _consumer;
    unsigned long  _count;
    BOOL  _lastNewLine;
    NSData * _rawData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (int)appendData:(id)arg1;
- (unsigned long)count;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;
- (BOOL)isLastCharacterNewLine;
- (id)rawData;

@end
