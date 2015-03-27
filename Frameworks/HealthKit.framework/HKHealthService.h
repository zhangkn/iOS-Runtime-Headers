/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSString, NSUUID;

@interface HKHealthService : NSObject <NSCopying, NSSecureCoding> {
    NSUUID *_identifier;
    double _lastConnection;
    NSString *_name;
    NSString *_serviceId;
    int _type;
}

@property(readonly) NSUUID * identifier;
@property double lastConnection;
@property(readonly) NSString * name;
@property(copy) NSString * serviceId;
@property(readonly) int type;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithType:(int)arg1 identifier:(id)arg2 name:(id)arg3 serviceId:(id)arg4;
- (id)_localizedHealthServiceType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)init;
- (id)initUnknownServiceWithIdentifier:(id)arg1 name:(id)arg2 serviceId:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 identifier:(id)arg2 name:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (double)lastConnection;
- (id)name;
- (id)serviceId;
- (void)setLastConnection:(double)arg1;
- (void)setServiceId:(id)arg1;
- (int)type;

@end