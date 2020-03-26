//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SXDataRecordStore;

@interface SXDataTableSelectorValidator : NSObject
{
    SXDataRecordStore *_recordStore;
    NSUInteger _dataOrientation;
}

@property(readonly, nonatomic) NSUInteger dataOrientation; // @synthesize dataOrientation=_dataOrientation;
@property(readonly, nonatomic) SXDataRecordStore *recordStore; // @synthesize recordStore=_recordStore;
// - (void).cxx_destruct;
- (id)descriptorForIndexPath:(CDStruct_2fea82da)arg1;
- (id)conditionEngineForSelector:(id)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (BOOL)validateCellSelector:(id)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (BOOL)validateColumnSelector:(id)arg1 forColumnIndex:(NSUInteger)arg2;
- (BOOL)validateRowSelector:(id)arg1 forRowIndex:(NSUInteger)arg2;
- (id)initWithRecordStore:(id)arg1 dataOrientation:(NSUInteger)arg2;

@end
