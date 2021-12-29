//
//  CADelegate.h
//  ConsoliAdsMediation
//
//  Created by OsamaNadeem on 12/22/21.
//  Copyright © 2021 ConsoliAds. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CAMediatedBannerView.h"
#import "CANativeAdRequestDelegate.h"


@class AdNetwork;

@protocol CADelegate <NSObject>

- (void)SaveAdNetworkRequest:(AdNetwork *_Nonnull)adNetwork;

- (void)caOnAdLoadFailed:(int)adNetworkName format:(int)format;

- (void)caOnAdLoadSuccess:(int)adNetworkName format:(int)format;

- (void)caOnAdShowSuccess:(int)adNetworkName format:(int)format;

- (void)caOnAdShowFailed:(int)adNetworkName format:(int)format;

- (void)caOnAdClosed:(int)adNetworkName format:(int)format;

- (void)caOnAdClick:(int)adNetworkName format:(int)format;
//
- (void)caOnRewardedVideoAdCompleted:(int)adNetworkName;
//
- (void)caOnAppOpenAdLoadFailed:(int)adNetworkName orientation:(UIInterfaceOrientation)orientation;
//
- (void)caOnAppOpenAdLoadSuccess:(int)adNetworkName;
//
- (void)caOnAppOpenAdShowSuccess:(int)adNetworkName;
//
- (void)caOnAppOpenAdClosed:(int)adNetworkName;
//
- (void)caOnAppOpenAdShowFailed:(int)adNetworkName;
//
- (void)caOnBannerAdLoadFailed:(int)adNetworkName mediatedAd:(CAMediatedBannerView*_Nonnull)mediatedBanner viewController:(UIViewController*_Nonnull)viewController;
//
- (void)caOnBannerAdClose:(int)adNetworkName bannerView:(CAMediatedBannerView*_Nonnull)bannerView;
//
- (void)caOnBannerAdLoadSuccess:(int)adNetworkName mediatedAd:(CAMediatedBannerView*_Nonnull)mediatedBanner refreshed:(BOOL)isRefresh;
//
- (void)caOnNativeLoadFailed:(int)adNetworkName viewController:(UIViewController*_Nonnull)viewController delegate:(nonnull id<CANativeAdRequestDelegate>)delegate;

@end


