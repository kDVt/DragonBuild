//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAssociatedMessageChatItem.h>

#import <ChatKit/CKMessageAcknowledgment-Protocol.h>

@class IMHandle, NSString, UIColor;

@interface CKMessageAcknowledgmentChatItem : CKAssociatedMessageChatItem <CKMessageAcknowledgment>
{
    long long _messageAcknowledgmentType;
}

@property(readonly, nonatomic) long long messageAcknowledgmentType; // @synthesize messageAcknowledgmentType=_messageAcknowledgmentType;
- (BOOL)wantsDrawerLayout;
- (struct CKBalloonDescriptor_t)balloonDescriptor;
@property(readonly, nonatomic) UIColor *selectedBalloonColor;
@property(readonly, nonatomic) UIColor *selectedAcknowledgmentImageColor;
@property(readonly, nonatomic) UIColor *acknowledgmentImageColor;
- (long long)themeColor;
- (long long)themeStyle;
@property(readonly, nonatomic) BOOL balloonColorType;
- (BOOL)transcriptOrientation;
@property(readonly, nonatomic) BOOL balloonOrientation;
@property(readonly, nonatomic) IMHandle *sender;
@property(readonly, nonatomic) NSString *acknowledgmentImageName;
- (CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets )arg2;
- (id)messageAcknowledgmentChatItem;
- (UIEdgeInsets)contentInsets;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;

@end
