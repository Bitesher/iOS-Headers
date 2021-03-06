/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GKTextLayout-Protocol.h"

@class NSAttributedString;

@interface GKTypographicLayout : NSObject <GKTextLayout>
{
    struct __CTFramesetter *_CTFramesetter;
    struct __CTFrame *_CTFrame;
    struct CGPoint *_positions;
    struct CGRect _frame;
    id _path;
    NSAttributedString *_attributedString;
    unsigned int _numberOfLines;
    float _leading;
}

@property(nonatomic) float leading; // @synthesize leading=_leading;
@property(nonatomic) unsigned int numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) id path; // @synthesize path=_path;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (struct CGSize)suggestFrameSizeFitsRange:(CDStruct_dff5684f *)arg1;
- (struct CGPoint *)lineOrigins;
- (id)lines;
- (struct __CTFrame *)CTFrame;
- (struct __CTFramesetter *)CTFramesetter;
- (void)dealloc;

@end

