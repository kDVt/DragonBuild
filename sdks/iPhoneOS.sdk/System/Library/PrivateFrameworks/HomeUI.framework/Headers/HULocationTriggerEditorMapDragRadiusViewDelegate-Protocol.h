//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HULocationTriggerEditorMapDragRadiusView;
@protocol MKOverlay;

@protocol HULocationTriggerEditorMapDragRadiusViewDelegate
- (id <MKOverlay>)mapRadiusView:(HULocationTriggerEditorMapDragRadiusView *)arg1 overlayForRadius:(double)arg2;
- (CDStruct_02837cd9)mapRadiusView:(HULocationTriggerEditorMapDragRadiusView *)arg1 boundingMapRectForOverlay:(id <MKOverlay>)arg2;
- (void)mapRadiusView:(HULocationTriggerEditorMapDragRadiusView *)arg1 radiusDidChange:(double)arg2;
@end
