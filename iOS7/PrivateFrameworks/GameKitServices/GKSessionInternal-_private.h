/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKitServices/GKSessionInternal.h>

@interface GKSessionInternal (_private)
- (void)unlock;
- (void)lock;
- (void)didPublishWithError:(int)arg1;
- (void)stopResolvingAllPeers;
- (id)serviceName;
- (_Bool)parseServiceName:(const char *)arg1 intoDisplayName:(id *)arg2 pid:(unsigned int *)arg3 state:(id *)arg4;
- (void)tellDelegate_networkStatisticsChanged:(id)arg1;
- (void)tellDelegate_updateRelay:(id)arg1;
- (void)tellDelegate_initiateRelay:(id)arg1;
- (void)tellDelegate_peerDidBecomeBusy:(id)arg1;
- (void)tellDelegate_connectionRequestToPeerFailed:(id)arg1;
- (void)tellDelegate_gotInvited:(id)arg1;
- (void)tellDelegate_didReceiveData:(id)arg1;
- (void)tellDelegate_didReceiveBand_RetryICE:(id)arg1;
- (void)tellDelegate_peerDidBecomeUnavailable:(id)arg1;
- (void)tellDelegate_peerDidBecomeAvailable:(id)arg1;
- (void)tellDelegate_isConnectingPeer:(id)arg1;
- (void)tellDelegate_didDisconnectPeer:(id)arg1;
- (void)tellDelegate_didConnectPeer:(id)arg1;
- (void)tellDelegate_sessionDidFailWithError:(id)arg1;
- (void)setDisplayName:(id)arg1 forPeer:(unsigned int)arg2;
- (void)printDictionaries;
- (id)createNSErrorFromGKSessionError:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (id)createNSErrorFromHRESULT:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (_Bool)isShuttingDown;
@end
