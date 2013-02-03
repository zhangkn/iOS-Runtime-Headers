/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString;

@interface AFSpeechCorrectionInfo : NSObject {
    int _alternativeSelectionCount;
    int _characterModificationCount;
    NSString *_fullText;
}

@property int alternativeSelectionCount;
@property int characterModificationCount;
@property(copy) NSString * fullText;

- (int)alternativeSelectionCount;
- (int)characterModificationCount;
- (void)dealloc;
- (id)dkPlistRepresentation;
- (id)fullText;
- (id)initWithDKPlistRepresentation:(id)arg1;
- (void)setAlternativeSelectionCount:(int)arg1;
- (void)setCharacterModificationCount:(int)arg1;
- (void)setFullText:(id)arg1;

@end