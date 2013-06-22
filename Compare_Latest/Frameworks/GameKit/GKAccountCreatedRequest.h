/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKDataRequest.h>

@class NSString;

@interface GKAccountCreatedRequest : GKDataRequest
{
    NSString *_playerID;
    NSString *_authToken;
    NSString *_accountName;
    NSString *_alias;
    BOOL _authenticateFinished;
}

@property(nonatomic) BOOL authenticateFinished; // @synthesize authenticateFinished=_authenticateFinished;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
- (BOOL)shouldProcessInBackground;
- (BOOL)authenticationRequired;
- (void)handleResponseFromServer:(id)arg1;
- (id)request;
- (id)key;
- (void)dealloc;
- (Class)responseClass;

@end
