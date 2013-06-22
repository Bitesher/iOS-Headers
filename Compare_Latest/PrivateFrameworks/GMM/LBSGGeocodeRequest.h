/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

@class LBSGRectangle;

@interface LBSGGeocodeRequest : PBRequest
{
    BOOL _hasNumFeatureLimit;
    unsigned int _numFeatureLimit;
    BOOL _hasIncludeBoundingBoxes;
    BOOL _includeBoundingBoxes;
    LBSGRectangle *_boundingBox;
    BOOL _hasAddressLinesLimit;
    int _addressLinesLimit;
}

@property(nonatomic) BOOL hasAddressLinesLimit; // @synthesize hasAddressLinesLimit=_hasAddressLinesLimit;
@property(retain, nonatomic) LBSGRectangle *boundingBox; // @synthesize boundingBox=_boundingBox;
@property(nonatomic) BOOL hasIncludeBoundingBoxes; // @synthesize hasIncludeBoundingBoxes=_hasIncludeBoundingBoxes;
@property(nonatomic) BOOL hasNumFeatureLimit; // @synthesize hasNumFeatureLimit=_hasNumFeatureLimit;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) int addressLinesLimit; // @synthesize addressLinesLimit=_addressLinesLimit;
@property(readonly, nonatomic) BOOL hasBoundingBox;
@property(nonatomic) BOOL includeBoundingBoxes; // @synthesize includeBoundingBoxes=_includeBoundingBoxes;
@property(nonatomic) unsigned int numFeatureLimit; // @synthesize numFeatureLimit=_numFeatureLimit;
- (void)dealloc;

@end
