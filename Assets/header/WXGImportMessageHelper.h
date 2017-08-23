//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BackupInfoItem, NSMutableSet, NSString, WXGMapTableObject;
@protocol WXGImportMessageHelperDelegate;

@interface WXGImportMessageHelper : NSObject
{
    _Bool m_bShouldImport;
    NSMutableSet *m_setChatName;
    WXGMapTableObject *m_mediaPathMapTable;
    BackupInfoItem *m_currentRecoverInfo;
    NSString *m_folderPath;
    NSString *m_tmpFolderPath;
    unsigned int m_currentMaxTime;
    id <WXGImportMessageHelperDelegate> _delegate;
}

+ (id)splitMsgListIDArray:(id)arg1;
@property(nonatomic) __weak id <WXGImportMessageHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getOneEmptyInfoItem;
- (_Bool)p_addContactListChat;
- (_Bool)p_renameFilesInMediaDictinary:(id)arg1;
- (_Bool)p_renameMediaFiles;
- (void)p_analysisiHasMeidaType:(unsigned int)arg1;
- (_Bool)p_handleBufferForBakChatMsgItem:(id)arg1 withMessageWrap:(id)arg2;
- (void)p_handleChatName:(id)arg1;
- (_Bool)p_addMsgFromMsgList:(id)arg1 withStartTime:(unsigned int)arg2 withEndTime:(unsigned int)arg3;
- (_Bool)internalRecoverMessage:(id)arg1 withSessionName:(id)arg2 withStartTime:(unsigned int)arg3 withEndTime:(unsigned int)arg4;
- (unsigned int)getCurrentMaxMsgTime;
- (id)getCurrentRecoverInfo;
- (void)stopImport;
- (id)initWithMsgListFolderPath:(id)arg1 withTmpFolderPath:(id)arg2;
- (id)init;

@end
