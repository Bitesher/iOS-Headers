/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSNumber, NSString, NSURL, SSAuthenticationContext, SSURLBagContext;

@interface ISDataProvider : NSObject <NSCopying>
{
    SSAuthenticationContext *_authenticationContext;
    NSNumber *_authenticatedAccountDSID;
    SSURLBagContext *_bagContext;
    long long _contentLength;
    NSString *_contentType;
    id _output;
    NSURL *_redirectURL;
}

+ (id)provider;
@property(retain) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain) id output; // @synthesize output=_output;
@property(retain) NSString *contentType; // @synthesize contentType=_contentType;
@property long long contentLength; // @synthesize contentLength=_contentLength;
@property(retain) SSURLBagContext *bagContext; // @synthesize bagContext=_bagContext;
@property(retain) NSNumber *authenticatedAccountDSID; // @synthesize authenticatedAccountDSID=_authenticatedAccountDSID;
@property(retain) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void)setup;
- (BOOL)parseData:(id)arg1 returningError:(id *)arg2;
- (long long)streamedBytes;
- (void)resetStream;
- (void)migrateOutputFromSubProvider:(id)arg1;
- (BOOL)isStream;
- (void)configureFromProvider:(id)arg1;
- (void)closeStream;
- (BOOL)canStreamContentLength:(long long)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
