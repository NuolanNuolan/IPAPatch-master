//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface FavoritesUtil : MMObject
{
}

+ (id)getContactHeadImage:(id)arg1;
+ (struct CGSize)sightViewSizeWithImgSize:(struct CGSize)arg1;
+ (struct CGSize)thumbImageSizeWithMediaItem:(id)arg1;
+ (unsigned int)getMaxDataSize:(id)arg1;
+ (void)calFavDataIllegalTypeAndSize:(id)arg1 fromMsg:(id)arg2;
+ (id)getWebpageFavItemUrl:(id)arg1;
+ (id)getFavTextCellText:(id)arg1;
+ (id)favTextFilter:(id)arg1;
+ (id)getFavoritesBatchDelQueuePath;
+ (id)getFavoritesSettingPath;
+ (id)getFavoritesSyncBufferPath;
+ (id)getFavoritesDBPath;
+ (id)getUserFavoritesRootDir;
+ (id)getFavFilterTitle:(id)arg1 MaxWidth:(double)arg2;
+ (id)getDataSourceId:(id)arg1;
+ (id)ConvertVideoFavData2WCUploadTask:(id)arg1 ShareUrl:(id)arg2;
+ (id)ConvertImg2WCUploadTask:(id)arg1;
+ (id)ConvertImgFavData2WCUploadTask:(id)arg1;
+ (id)ConvertImgFavItem2WCUploadTask:(id)arg1;
+ (id)ConvertMallProductFavItem2MsgWrap:(id)arg1;
+ (id)ConvertSightFavItem2VideoInfo:(id)arg1;
+ (id)ConvertTVFavItem2MsgWrap:(id)arg1;
+ (id)ConvertGoodsFavItem2MsgWrap:(id)arg1;
+ (id)ConvertWebPageFavItem2MsgWrap:(id)arg1;
+ (id)ConvertMusicFavItem2MsgWrap:(id)arg1;
+ (id)ConvertShareCardFavItem2MsgWrap:(id)arg1;
+ (id)ConvertLocFavItem2MsgWrap:(id)arg1;
+ (id)ConvertVideoFavItem2VideoInfo:(id)arg1;
+ (id)ConvertVideoFavItem2MsgWrap:(id)arg1;
+ (id)ConvertFileFavItem2MsgWrap:(id)arg1;
+ (id)ConvertImg2MsgWrap:(id)arg1;
+ (id)ConvertImgFavData2MsgWrap:(id)arg1;
+ (id)ConvertImgFavItem2MsgWrap:(id)arg1;
+ (id)ConvertTextFavItem2MsgWrap:(id)arg1;
+ (id)ConvertMsgList2FavItem:(id)arg1;
+ (id)ConvertMultiReaderMsg2FavItem:(id)arg1;
+ (id)ConvertRecordMsg2FavItem:(id)arg1;
+ (id)ConvertTVWC2FavItem:(id)arg1;
+ (id)ConvertTVMsg2FavItem:(id)arg1;
+ (id)ConvertTVDetail2FavItem:(id)arg1 Desc:(id)arg2 ThumbUrl:(id)arg3 TVInfo:(id)arg4 appId:(id)arg5;
+ (id)ConvertMallProductWC2FavItem:(id)arg1;
+ (id)ConvertMallProductMsg2FavItem:(id)arg1;
+ (id)ConvertMallProductDetail2FavItem:(id)arg1;
+ (id)ConvertProductWC2FavItem:(id)arg1;
+ (id)ConvertProductMsg2FavItem:(id)arg1;
+ (id)ConvertProductDetail2FavItem:(id)arg1 Desc:(id)arg2 ThumbUrl:(id)arg3 ProductInfo:(id)arg4 appId:(id)arg5;
+ (id)ConvertCanvasPage2FavItem:(id)arg1 desc:(id)arg2 WebUrl:(id)arg3 CanvasPageInfo:(id)arg4 FromUser:(id)arg5 EventId:(id)arg6 AppId:(id)arg7 ThumbUrl:(id)arg8 SrcCreateTime:(unsigned int)arg9;
+ (id)ConvertStreamVideoMsg2FavItem:(id)arg1;
+ (id)ConvertVideoSNS2FavItem:(id)arg1 desc:(id)arg2 WebUrl:(id)arg3 FromUser:(id)arg4 EventId:(id)arg5 MediaId:(id)arg6 AppId:(id)arg7 ThumbUrl:(id)arg8 SrcCreateTime:(unsigned int)arg9;
+ (id)ConvertWCSightItem2FavItem:(id)arg1 withEventID:(id)arg2 andCreateTime:(unsigned int)arg3 andFromUser:(id)arg4;
+ (id)ConvertSightMsg2FavItem:(id)arg1;
+ (id)ConvertVideoMsg2FavItem:(id)arg1;
+ (id)ConvertFileMail2FavItem:(id)arg1 Attach:(id)arg2;
+ (id)ConvertFileMsg2FavItem:(id)arg1;
+ (id)ConvertVoicePost2FavItem:(id)arg1 VoiceTime:(unsigned int)arg2 VoiceFmt:(unsigned int)arg3;
+ (id)ConvertVoiceMsg2FavItem:(id)arg1;
+ (id)ConvertLocPost2FavItem:(double)arg1 Lng:(double)arg2 Scale:(double)arg3 Label:(id)arg4 PoiName:(id)arg5 Remark:(id)arg6;
+ (id)ConvertLocationMap2FavItem:(double)arg1 Lng:(double)arg2 Scale:(double)arg3 Label:(id)arg4 Username:(id)arg5 PoiName:(id)arg6 msgId:(id)arg7;
+ (id)ConvertLocationMsg2FavItem:(id)arg1;
+ (id)ConvertMusicShake2FavItem:(id)arg1 Singer:(id)arg2 WebUrl:(id)arg3 LowUrl:(id)arg4 DataUrl:(id)arg5 ThumbUrl:(id)arg6;
+ (id)ConvertMusicBanner2FavItem:(id)arg1 Singer:(id)arg2 WebUrl:(id)arg3 LowUrl:(id)arg4 DataUrl:(id)arg5 ThumbUrl:(id)arg6;
+ (id)ConvertMusicSNS2FavItem:(id)arg1 Singer:(id)arg2 WebUrl:(id)arg3 LowUrl:(id)arg4 DataUrl:(id)arg5 FromUser:(id)arg6 EventId:(id)arg7 MediaId:(id)arg8 AppId:(id)arg9 ThumbUrl:(id)arg10 SrcCreateTime:(unsigned int)arg11;
+ (id)ConvertMusicMsg2FavItem:(id)arg1;
+ (id)ConvertShareCardMsg2FavItem:(id)arg1;
+ (id)ConvertImgListPost2FavItem:(id)arg1 ArrThumbPath:(id)arg2;
+ (id)ConvertImgPost2FavItem:(id)arg1 ThumbPath:(id)arg2;
+ (id)ConvertImgSNS2FavItem:(id)arg1 ThumbUrl:(id)arg2 SourceDataPath:(id)arg3 FromUser:(id)arg4 EventId:(id)arg5 mediaId:(id)arg6 AppId:(id)arg7 SrcCreateTime:(unsigned int)arg8;
+ (id)ConvertImgMsg2FavItem:(id)arg1;
+ (id)ConvertUrlWeb2FavItem:(id)arg1 Title:(id)arg2 Desc:(id)arg3 ThumbUrl:(id)arg4 AppId:(id)arg5 UserName:(id)arg6 ContentAttributeFlag:(unsigned int)arg7;
+ (id)ConvertCanvasUrlSNS2FavItem:(id)arg1 Title:(id)arg2 EventId:(id)arg3 FromUser:(id)arg4 AppId:(id)arg5 ThumbUrl:(id)arg6 SrcCreateTime:(unsigned int)arg7 ContentAttributeFlag:(unsigned int)arg8 CanvasInfoXml:(id)arg9;
+ (id)ConvertUrlSNS2FavItem:(id)arg1 Title:(id)arg2 EventId:(id)arg3 FromUser:(id)arg4 AppId:(id)arg5 ThumbUrl:(id)arg6 SrcCreateTime:(unsigned int)arg7 ContentAttributeFlag:(unsigned int)arg8;
+ (id)ConvertUrlReader2FavItem:(id)arg1 Url:(id)arg2;
+ (id)ConvertUrlMsg2FavItem:(id)arg1;
+ (id)ConvertTextPost2FavItem:(id)arg1;
+ (id)ConvertTextSNS2FavItem:(id)arg1;
+ (id)ConvertTextMsg2FavItem:(id)arg1;
+ (id)ConvertWebPage2FavItem:(id)arg1 FavSourceId:(id)arg2 FromUrl:(id)arg3;
+ (id)ConvertMsgToFavItem:(id)arg1;

@end

