/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class <SCROBrailleTranslatorProtocol>, NSBundle, NSLock;

@interface SCROBrailleTranslationManager : NSObject {
    NSLock *_contentLock;
    <SCROBrailleTranslatorProtocol> *_translator;
    NSBundle *_translatorBundle;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedManager;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)printBrailleForText:(id)arg1 contracted:(BOOL)arg2 eightDot:(BOOL)arg3 locations:(id*)arg4;
- (void)release;
- (id)retain;
- (NSUInteger)retainCount;
- (void)setTranslationTableWithTableIdentifier:(id)arg1;
- (id)tableIdentifier;
- (BOOL)tableSupportsContractedBraille;
- (BOOL)tableSupportsEightDotBraille;
- (id)textForPrintBraille:(id)arg1 contracted:(BOOL)arg2 eightDot:(BOOL)arg3 locations:(id*)arg4;

@end