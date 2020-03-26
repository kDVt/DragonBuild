//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SVMoreFromInteractionHandlerFactory-Protocol.h>

@protocol NUURLHandling, NUVideoCallToActionURLProviding, SVVideoPlaybackController, SVVideoViewControllerProviding;

@interface NUVideoMoreFromInteractionHandlerFactory : NSObject <SVMoreFromInteractionHandlerFactory>
{
    id <NUURLHandling> _urlHandler;
    id <NUVideoCallToActionURLProviding> _callToActionURLProvider;
    id <SVVideoPlaybackController> _playbackController;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) id <SVVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <NUVideoCallToActionURLProviding> callToActionURLProvider; // @synthesize callToActionURLProvider=_callToActionURLProvider;
@property(readonly, nonatomic) id <NUURLHandling> urlHandler; // @synthesize urlHandler=_urlHandler;
// - (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithPlaybackController:(id)arg1 urlHandler:(id)arg2 callToActionURLProvider:(id)arg3 videoViewControllerProvider:(id)arg4;

@end
