//
//  CADelegate.h
//  ConsoliAdsMediation
//
//  Created by OsamaNadeem on 12/22/21.
//  Copyright © 2021 ConsoliAds. All rights reserved.
//

#import <Foundation/Foundation.h>

//#import "CAMediatedBannerView.h" #Will use in future when integrating banner
//#import "CANativeAdRequestDelegate.h" #Will use in futere when integrating NativeAd


@class AdNetwork;

@protocol CADelegate <NSObject>

- (void)SaveAdNetworkRequest:(AdNetwork *_Nonnull)adNetwork;

- (void)caOnAdLoadFailed:(int)adNetworkName format:(int)format;

- (void)caOnAdLoadSuccess:(int)adNetworkName format:(int)format;

- (void)caOnAdShowSuccess:(int)adNetworkName format:(int)format;

- (void)caOnAdShowFailed:(int)adNetworkName format:(int)format;

- (void)caOnAdClosed:(int)adNetworkName format:(int)format;

//- (void)caOnAdClick:(AdNetworkName)adNetworkName format:(AdFormat)format;
//
//- (void)caOnRewardedVideoAdCompleted:(AdNetworkName)adNetworkName;
//
//- (void)caOnAppOpenAdLoadFailed:(AdNetworkName)adNetworkName orientation:(UIInterfaceOrientation)orientation;
//
//- (void)caOnAppOpenAdLoadSuccess:(AdNetworkName)adNetworkName;
//
//- (void)caOnAppOpenAdShowSuccess:(AdNetworkName)adNetworkName;
//
//- (void)caOnAppOpenAdClosed:(AdNetworkName)adNetworkName;
//
//- (void)caOnAppOpenAdShowFailed:(AdNetworkName)adNetworkName;
//
//- (void)caOnBannerAdLoadFailed:(AdNetworkName)adNetworkName mediatedAd:(CAMediatedBannerView*_Nonnull)mediatedBanner viewController:(UIViewController*_Nonnull)viewController;
//
//- (void)caOnBannerAdClose:(AdNetworkName)adNetworkName bannerView:(CAMediatedBannerView*_Nonnull)bannerView;
//
//- (void)caOnBannerAdLoadSuccess:(AdNetworkName)adNetworkName mediatedAd:(CAMediatedBannerView*_Nonnull)mediatedBanner refreshed:(BOOL)isRefresh;
//
//- (void)caOnNativeLoadFailed:(AdNetworkName)adNetworkName viewController:(UIViewController*_Nonnull)viewController delegate:(nonnull id<CANativeAdRequestDelegate>)delegate;

@end


