/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface PLPerAppDataUsageSnapshot : NSObject
{
    NSDictionary *_perAppDataUsage;
    double _timeSinceEpoch;
}

@property double timeSinceEpoch; // @synthesize timeSinceEpoch=_timeSinceEpoch;
@property(retain) NSDictionary *perAppDataUsage; // @synthesize perAppDataUsage=_perAppDataUsage;
- (id)description;
- (void)dealloc;
- (id)initWithPerAppDataUsage:(id)arg1 time:(double)arg2;

@end
