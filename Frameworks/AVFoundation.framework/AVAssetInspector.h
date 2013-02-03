/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary, NSString, NSArray;

@interface AVAssetInspector : NSObject <NSCopying> {
}

@property(readonly) NSArray * alternateTrackGroups;
@property(readonly) NSArray * availableMetadataFormats;
@property(readonly) NSArray * commonMetadata;
@property(getter=isComposable,readonly) BOOL composable;
@property(readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property(getter=isExportable,readonly) BOOL exportable;
@property(readonly) NSString * lyrics;
@property(readonly) struct CGSize { float width; float height; } naturalSize;
@property(readonly) int naturalTimeScale;
@property(readonly) float preferredRate;
@property(readonly) struct CGAffineTransform { float a; float b; float c; float d; float tx; float ty; } preferredTransform;
@property(readonly) float preferredVolume;
@property(readonly) BOOL providesPreciseDurationAndTiming;
@property(getter=isReadable,readonly) BOOL readable;
@property(readonly) int trackCount;
@property(readonly) NSDictionary * trackReferences;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })_CMTimeForProperty:(struct __CFString { }*)arg1;
- (long)_SInt32ForProperty:(struct __CFString { }*)arg1;
- (id)_arrayForProperty:(struct __CFString { }*)arg1;
- (unsigned char)_booleanForProperty:(struct __CFString { }*)arg1;
- (id)_dictionaryForProperty:(struct __CFString { }*)arg1;
- (float)_floatForProperty:(struct __CFString { }*)arg1;
- (void*)_propertyAccessor:(struct __CFString { }*)arg1;
- (id)_stringForProperty:(struct __CFString { }*)arg1;
- (id)_tollFreeBridgedObjectForProperty:(struct __CFString { }*)arg1;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (BOOL)hasProtectedContent;
- (BOOL)isComposable;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (id)lyrics;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (int)naturalTimeScale;
- (float)preferredRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (BOOL)providesPreciseDurationAndTiming;
- (long)trackCount;
- (id)trackReferences;

@end