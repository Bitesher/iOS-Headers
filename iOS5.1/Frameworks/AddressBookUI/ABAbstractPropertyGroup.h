/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface ABAbstractPropertyGroup : NSObject
{
    NSArray *_people;
    id <ABStyleProvider> _styleProvider;
    BOOL _hasChanges;
}

- (id)init;
- (void)dealloc;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
- (int)property;
- (void)updateRecord;
- (void)reloadFromModel;
- (BOOL)canSave;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) BOOL hasChanges; // @synthesize hasChanges=_hasChanges;

@end

