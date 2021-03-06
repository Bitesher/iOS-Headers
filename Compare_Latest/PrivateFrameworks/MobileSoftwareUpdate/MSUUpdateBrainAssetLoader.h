/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ASAsset;

@interface MSUUpdateBrainAssetLoader : NSObject
{
    ASAsset *_updateAsset;
}

@property(retain, nonatomic) ASAsset *updateAsset; // @synthesize updateAsset=_updateAsset;
- (long long)requiredDiskSpace:(id *)arg1;
- (_Bool)purgeUpdateBrains:(id *)arg1;
- (void)adjustOptions:(id)arg1 completion:(id)arg2;
- (_Bool)cancel:(id *)arg1;
- (void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(id)arg2;
- (void)dealloc;
- (id)initWithUpdateAsset:(id)arg1;

@end

