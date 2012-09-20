/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSArray, NSString, EKPersistentCalendarItem, EKRecurrenceEnd, NSDate;

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying> {
    id _helper;
    EKRecurrenceEnd *_recurrenceEnd;
}

@property(readonly) NSString * UUID;
@property(readonly) NSString * calendarIdentifier;
@property(copy) NSDate * endDate;
@property unsigned int count;
@property int frequency;
@property int interval;
@property int firstDayOfTheWeek;
@property(copy) NSArray * daysOfTheWeek;
@property(copy) NSArray * daysOfTheMonth;
@property(copy) NSArray * daysOfTheYear;
@property(copy) NSArray * weeksOfTheYear;
@property(copy) NSArray * monthsOfTheYear;
@property(copy) NSArray * setPositions;
@property(readonly) NSDate * cachedEndDate;
@property(retain) EKPersistentCalendarItem * owner;
@property(readonly) BOOL shouldPinMonthDays;

+ (id)relations;

- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)count;
- (id)UUID;
- (id)calendarIdentifier;
- (int)interval;
- (void)setInterval:(int)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setOwner:(id)arg1;
- (id)owner;
- (id)_helper;
- (BOOL)isDirty;
- (int)firstDayOfTheWeek;
- (BOOL)shouldPinMonthDays;
- (id)cachedEndDate;
- (void)setFirstDayOfTheWeek:(int)arg1;
- (id)weeksOfTheYear;
- (id)daysOfTheYear;
- (id)monthsOfTheYear;
- (id)setPositions;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (int)frequency;
- (void)setWeeksOfTheYear:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (void)setSetPositions:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)setFrequency:(int)arg1;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })gregorianUnits;
- (void)setEndDate:(id)arg1;
- (id)endDate;
- (BOOL)validate:(id*)arg1;
- (int)entityType;

@end