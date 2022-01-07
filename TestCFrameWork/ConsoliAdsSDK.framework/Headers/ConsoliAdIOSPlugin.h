//
//  ConsoliAdIOSPlugin.h
//  ConsoliAds
//
//  Created by FazalElahi on 06/02/2017.
//  Copyright © 2017 FazalElahi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <ConsoliAdsSDK/CAIconAdView.h>
#import <ConsoliAdsSDK/ConsoliSDKAdsDelegate.h>
#import <ConsoliAdsSDK/ConsoliAdsIconAdSizes.h>
#import <ConsoliAdsSDK/IconAdDelegate.h>
#import <ConsoliAdsSDK/ConsoliAdsBannerTypes.h>
#import <ConsoliAdsSDK/BannerAdDelegate.h>
#import <ConsoliAdsSDK/ConsoliAdsImmersiveAdSizes.h>

@interface ConsoliAdIOSPlugin : NSObject

+ (instancetype)sharedPlugIn;

- (BOOL)initWithKey:(NSString*)appKey andDelegate:(id<ConsoliSDKAdsDelegate>)adelegate userConsent:(BOOL)consent devMode:(BOOL)isDevMode;

- (BOOL)showInterstitial:(NSString*)scene withRootViewController:(UIViewController *)viewController;

- (void)showIconAd:(NSString*)scene iconAdView:(CAIconAdView*)iconAdView withAdSize:(CAIconAdSize)adSize delegate:(id<IconAdDelegate>)delegate;

- (void)loadInterstitialForScene:(NSString*)scene;

- (void)loadStaticInterstitialForScene:(NSString*)scene;

- (void)loadRewardedVideoForScene:(NSString*)scene;

- (void)requestRewardedVideoAdForScene:(NSString*)scene;

- (BOOL)isRewardedVideoAvailable:(NSString*)scene;

- (BOOL)isRewardedVideoAvailableOrMove:(NSString*)scene;

- (BOOL)isInterstitialLoaded:(NSString*)scene;

- (BOOL)isInterstitialLoadedorMove:(NSString*)scene;

- (BOOL)showRewardedVideoAdForScene:(NSString*)scene withRootViewController:(UIViewController*)viewController;

- (void)showNative:(NSString*)scene delegate:(id<CASDKNativeAdDelegate>)delegate;

- (BOOL)showBanner:(NSString*)scene withUIView:(UIView *)view withAdSize:(CABannerAdSize)adSize withAdPosition:(CAAdPosition)adPosition andDelegate:(id<BannerAdDelegate>)bannerDelegate;

- (void)hideBannerFromView:(UIView *)view;

- (BOOL)showStaticInterstitial:(NSString*)scene withRootViewController:(UIViewController *)viewController;

- (BOOL)isStaticInterstitialAvailable:(NSString*)scene;
- (BOOL)isStaticInterstitialAvailableorMove:(NSString*)scene;

+ (NSDictionary*)getInAppVersion;

- (void)loadIconAd:(NSString*)scene delegate:(id<IconAdDelegate>)adelegate;

- (void)loadImmersiveForUnityPlatform:(NSString *)scene size:(CAImmersiveAdSize)size delegate:(id)delegate;

@end
