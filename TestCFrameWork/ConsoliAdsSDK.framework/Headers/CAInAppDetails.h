//
//  CAInAppProduct.h
//  ConsoliAd
//
//  Created by saira on 18/12/2020.
//  Copyright © 2020 FazalElahi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAInAppDetails : NSObject

typedef enum : NSUInteger {
    
    KCAInterstitialAd,
    KCAVideoAd,
    KCARewardedAd,
    KCABannerAd,
    KCAConsoliAdsIconAd,
    KCANative,
    KCAConsoliAdsImmersiveAd,

} CAAdType;



@property(nonatomic) NSString *localizedDescription;

@property(nonatomic) NSString *localizedTitle;

@property(nonatomic) NSDecimalNumber *price;

@property(nonatomic) NSLocale *priceLocale;

@property(nonatomic) NSString *productIdentifier;

@property (nonatomic) CAAdType adType;

@property(nonatomic) NSString* scene;

-(NSString*) getLocalizedDescription;

-(NSString*) getLocalizedTitle;

-(NSDecimalNumber*) getPrice;

-(NSLocale*) getPriceLocale;

-(NSString*) getProductIdentifier;

-(NSUInteger*) getAdType;

-(NSString*) getScene;

@end

NS_ASSUME_NONNULL_END
