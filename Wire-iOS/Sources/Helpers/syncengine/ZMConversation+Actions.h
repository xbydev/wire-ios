// 
// Wire
// Copyright (C) 2016 Wire Swiss GmbH
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program. If not, see http://www.gnu.org/licenses/.
// 


#import <WireSyncEngine/WireSyncEngine.h>
#import "ZetaIconTypes.h"



typedef NSString ConversationAction;

extern NSString * const ConversationActionDelete;
extern NSString * const ConversationActionLeave;
extern NSString * const ConversationActionSilence;
extern NSString * const ConversationActionUnsilence;
extern NSString * const ConversationActionArchive;
extern NSString * const ConversationActionUnarchive;
extern NSString * const ConversationActionCancelConnectionRequest;
extern NSString * const ConversationActionBlockUser;
extern NSString * const ConversationActionUnblockUser;
extern NSString * const ConversationActionMarkAsRead;
extern NSString * const ConversationActionMarkAsUnread;


@interface ZMConversation (Actions)

- (NSOrderedSet *)availableActions;

@end
