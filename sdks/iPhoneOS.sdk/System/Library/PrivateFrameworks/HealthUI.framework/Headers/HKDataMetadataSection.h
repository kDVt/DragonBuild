//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDataMetadataSectionProtocol-Protocol.h>

@interface HKDataMetadataSection : NSObject <HKDataMetadataSectionProtocol>
{
}

- (void)willDisplayCell:(id)arg1 forIndex:(NSUInteger)arg2 tableView:(id)arg3;
- (void)selectCellForIndex:(NSUInteger)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;
- (id)cellForIndex:(NSUInteger)arg1 tableView:(id)arg2;
- (NSUInteger)numberOfRowsInSection;
- (id)sectionFooter;
- (id)sectionTitle;

@end
