//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBIconViewProviding-Protocol.h>

@class SBFloatingDockViewController, SBIconController, SBRootFolderController, SBWallpaperController, _SBHomeScreenFolderDelegate;

@interface SBHomeScreenPreviewView : UIView <SBIconViewProviding>
{
    UIView *_folderContent;
    UIView *_floatingDock;
    UIView *_statusBar;
    SBRootFolderController *_rootFolderController;
    _SBHomeScreenFolderDelegate *_folderDelegate;
    SBIconController *_iconController;
    SBWallpaperController *_wallpaperController;
    SBFloatingDockViewController *_floatingDockViewController;
}

@property(readonly, nonatomic) SBFloatingDockViewController *floatingDockViewController; // @synthesize floatingDockViewController=_floatingDockViewController;
@property(readonly, nonatomic) SBWallpaperController *wallpaperController; // @synthesize wallpaperController=_wallpaperController;
@property(readonly, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
// - (void).cxx_destruct;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (BOOL)isIconViewRecycled:(id)arg1;
- (void)recycleIconView:(id)arg1;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 iconController:(id)arg2 wallpaperController:(id)arg3 options:(NSUInteger)arg4 wallpaperImage:(id)arg5;

@end
