//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSSPropertyMap, TSSPropertySet;

@protocol TSTCellDiffing
+ (TSSPropertySet *)cellDiffProperties;
- (id)objectByRemovingPropertiesInMap:(TSSPropertyMap *)arg1 addingPropertiesInMap:(TSSPropertyMap *)arg2 updateInverseResetPropertyMap:(TSSPropertyMap *)arg3 updateInverseSetPropertyMap:(TSSPropertyMap *)arg4;
@end
