//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMAssociatedMessageItem.h>

@interface IMAssociatedMessageItem (IMTranscriptChatItemRules)
- (BOOL)shouldGenerateTopLevelChatItem;
- (id)_newChatItemsWithFilteredChat:(BOOL)arg1 isBusiness:(BOOL)arg2 parentChatIsSpam:(BOOL)arg3 hasKnownParticipants:(BOOL)arg4;
- (id)_newChatItems;
- (BOOL)isIncomingTypingOrCancelTypingMessage;
- (BOOL)isTypingOrCancelTypingMessage;
- (BOOL)isCancelTypingMessage;
- (BOOL)isIncomingTypingMessage;
@end
