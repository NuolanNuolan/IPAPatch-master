//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIImage;

@interface EditImageAttr : NSObject
{
    _Bool _isEdited;
    NSString *_url;
    UIImage *_editedImage;
    NSMutableArray *_drawViewArray;
}

@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(retain, nonatomic) NSMutableArray *drawViewArray; // @synthesize drawViewArray=_drawViewArray;
@property(retain, nonatomic) UIImage *editedImage; // @synthesize editedImage=_editedImage;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithAssetUrl:(id)arg1 withImage:(id)arg2 withDrawLayer:(id)arg3 withEdited:(_Bool)arg4;

@end

