/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct RefPtr<WebCore::Geolocation> { 
        struct Geolocation {} *m_ptr; 
    } _geolocation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _denyCallback;

}

@property(copy) id denyCallback;


- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deny;
- (id)denyCallback;
- (BOOL)shouldClearCache;
- (void)denyOnlyThisRequest;
- (void)allow;
- (void)setDenyCallback:(id)arg1;
- (id)initWithGeolocation:(struct Geolocation { int (**x1)(); struct ScriptExecutionContext {} *x2; unsigned int x3; int x4; struct HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>> > { struct HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>> > { struct RefPtr<WebCore::Geolocation::GeoNotifier> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_5_1_1; } x5; struct Watchers { struct HashMap<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>> > { struct HashTable<int, std::__1::pair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::PairFirstExtractor<std::__1::pair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>>, WTF::IntHash<unsigned int>, WTF::HashMapValueTraits<WTF::HashTraits<int>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>>, WTF::HashTraits<int> > { struct pair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_6_1_1; struct HashMap<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::HashTraits<int> > { struct HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, std::__1::pair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int>, WTF::PairFirstExtractor<std::__1::pair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int>>, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::PairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::HashTraits<int>>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>> > { struct pair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_2_2_1; } x_6_1_2; } x6; struct HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>> > { struct HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>> > { struct RefPtr<WebCore::Geolocation::GeoNotifier> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_7_1_1; } x7; struct RefPtr<WebCore::Geoposition> { struct Geoposition {} *x_8_1_1; } x8; int x9; boolx10; boolx11; boolx12; struct RefPtr<WebCore::PositionError> { struct PositionError {} *x_13_1_1; } x13; struct Timer<WebCore::Geolocation> { int (**x_14_1_1)(); double x_14_1_2; double x_14_1_3; int x_14_1_4; unsigned int x_14_1_5; struct Geolocation {} *x_14_1_6; } x14; struct RefPtr<WebCore::Geoposition> { struct Geoposition {} *x_15_1_1; } x15; struct HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>> > { struct HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>> > { struct RefPtr<WebCore::Geolocation::GeoNotifier> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_16_1_1; } x16; }*)arg1;

@end