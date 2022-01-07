//
//  ConsoliSDKAdsDelegate.h
//  ConsoliAds
//
//  Created by FazalElahi on 09/02/2017.
//  Copyright © 2017 FazalElahi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CAInAppDetails.h"
#import "CAInAppError.h"
#import "NativeAdBase.h"

@protocol ConsoliSDKAdsDelegate <NSObject>

- (void)sdkDidInitialized:(BOOL)status;

- (void)didCloseInterstitial:(NSString*) sceneId;
- (void)didClickInterstitial:(NSString*) sceneId productId:(NSString *)redirectionProductId;
- (void)didDisplayInterstitial:(NSString*) sceneId;
- (void)didFailedToLoadInterstitialAd:(NSString*)sceneId error:(NSString *)error;
- (void)didInterstitialLoadSuccess:(NSString*) sceneId;

- (void)onStaticInterstitialLoadSuccess:(NSString*)sceneId;
- (void)staticInterstitialAdClosed:(NSString*) sceneId;
- (void)staticInterstitialAdClicked:(NSString*) sceneId productId:(NSString *)redirectionProductId;
- (void)staticInterstitialAdShown:(NSString*) sceneId;
- (void)staticInterstitialAdFailed:(NSString*)sceneId error:(NSString *)error;

- (void)didDisplayNative:(NSString*)sceneId;
- (void)didClickNative:(NSString*)sceneId productId:(NSString *)redirectionProductId;
- (void)didCloseNative:(NSString*)sceneId;
- (void)didFailedToLoadNativeAd:(NSString*)sceneId error:(NSString *)error;
- (void)didLoadNativeAdds:(NativeAdBase*)nativeAd scene:(NSString *)scene;

- (void)onAdError:(NSString*)error;

- (void)rewardedVideoAdLoaded:(NSString*)sceneId;
- (void)rewardedVideoAdCompleted:(NSString*)sceneId withReward:(int)reward;
- (void)rewardedVideoAdClosed:(NSString*)sceneId;
- (void)rewardedVideoAdClicked:(NSString*)sceneId productId:(NSString *)redirectionProductId;
- (void)rewardedVideoAdDidDisplay:(NSString*)sceneId;
- (void)didFailToLoadRewardedVideo:(NSString*)sceneId error:(NSString *)error;
- (void)didFailToShowRewardedVideo:(NSString*)sceneId error:(NSString *)error;

@optional

- (void)didSucceedToLoadRewardedVideo:(NSString*)sceneId;

- (void)onInAppPurchaseSuccessed:(CAInAppDetails *)product;
- (void)onInAppPurchaseFailed:(CAInAppError *)error;
- (void)onInAppPurchasesRestore:(CAInAppDetails *)product;

@end

@protocol CAConsoliAdSDKInlineAdDelegate <NSObject>
@end

@protocol CASDKNativeAdDelegate <CAConsoliAdSDKInlineAdDelegate>

//for use as delegates on user end
- (void)onAdLoaded:(NativeAdBase*)nativeAd;
- (void)onAdFailedToLoad:(NSString*)sceneId error:(NSString*)error;
- (void)onAdClicked:(NSString*)ProductId;
- (void)onLoggingImpression;
- (void)onAdClosed;

@end
