/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class CIColor, NSString;

@interface UIColor : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_systemColorName;
}

+ (double)_luminanceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)textFieldAtomBlueColor;
+ (id)__halfTransparentWhiteColor;
+ (id)__halfTransparentBlackColor;
+ (id)tableCellDefaultSelectionTintColor;
+ (id)infoTextOverPinStripeTextColor;
+ (id)textFieldAtomPurpleColor;
+ (id)tableCellGrayTextColor;
+ (id)tableCellValue2BlueColor;
+ (id)tableCellValue1BlueColor;
+ (id)sectionHeaderBorderColor;
+ (id)sectionHeaderOpaqueBackgroundColor;
+ (id)sectionHeaderBackgroundColor;
+ (id)sectionListBorderColor;
+ (id)tableGroupedTopShadowColor;
+ (id)tableShadowColor;
+ (id)tableSelectionGradientEndColor;
+ (id)tableSelectionGradientStartColor;
+ (id)tableSelectionColor;
+ (id)tablePlainHeaderFooterFloatingBackgroundColor;
+ (id)tablePlainHeaderFooterBackgroundColor;
+ (id)tableCellbackgroundColorPigglyWiggly;
+ (id)tableCellBackgroundColor;
+ (id)tableCellGroupedBackgroundColorLegacyWhite;
+ (id)tableCellPlainBackgroundColor;
+ (id)tableBackgroundColor;
+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)clearColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)lightGrayColor;
+ (id)darkGrayColor;
+ (id)blackColor;
+ (id)classFallbacksForKeyedArchiver;
+ (_Bool)supportsSecureCoding;
+ (id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(double)arg4;
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;
+ (id)_systemColorWithName:(id)arg1;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (id)_colorCombinedWithColors:(id)arg1;
- (id)_colorCombinedWithColor:(id)arg1;
- (double)_luminance;
- (_Bool)_isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;
- (_Bool)isPatternColor;
- (id)styleString;
- (double)alphaComponent;
- (struct CGColor *)cgColor;
- (_Bool)_getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (_Bool)_getWhite:(double *)arg1 alpha:(double *)arg2;
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) CIColor *CIColor;
@property(readonly, nonatomic) struct CGColor *CGColor;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)dealloc;
- (id)initWithCIColor:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;

@end

