//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, TSCECalculationEngine, TSCERefNamingContext, TSCEWrappedRangeRef;

@protocol TSCERefNamingProtocol <NSObject>
- (NSString *)nameForWrappedRangeRef:(TSCEWrappedRangeRef *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForChromeColumnIndex:(const struct TSUChromeColumnIndex )arg1 inTable:(const UUIDData_5fbc143e )arg2 useSymbolicNames:(BOOL)arg3;
- (NSString *)cellRangeNameFromChromeRangeRef:(const RefTypeHolder_8c6da553 )arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForChromeRangeRef:(const RefTypeHolder_8c6da553 )arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForBaseRangeRef:(const RefTypeHolder_1140c985 )arg1 namingContext:(TSCERefNamingContext *)arg2;
- (id)initWithCalcEngine:(TSCECalculationEngine *)arg1;
@end
