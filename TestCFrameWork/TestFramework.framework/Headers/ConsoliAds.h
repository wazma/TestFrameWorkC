//
//  ConsoliAds.h
//  ConsoliAdsMediation
//
//  Created by FazalElahi on 15/10/2018.
//  Copyright © 2018 ConsoliAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CAInspectorAdNetworkIDs.h"
#import "ConsoliAdsMediationDelegate.h"
#import "CANativeAdRequestDelegate.h"
#import "MediationManager.h"
#import "CodeProfiler.h"
#import "CALogManager.h"
#import "CAConstants.h"
#import "AdNetwork.h"
#import "AdNetwork_InternalHeader.h"
#import "CAScene.h"
#import "CAMediatedBannerView.h"
#import "CAMediationConstants.h"
#import "CADelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface ConsoliAds : NSObject <CADelegate>

@property (nonatomic , retain) CodeProfiler *myProfiler;
@property (nonatomic , retain) CAInspectorAdNetworkIDs *adIDList;
@property (nonatomic , retain) NSMutableArray<CAScene*> *scenesArray;
@property (nonatomic) BOOL isRTB;
@property (nonatomic) BOOL userConsent;
@property (nonatomic) BOOL isCOPPA;
@property (nonatomic) BOOL isDevMode;
@property (nonatomic , retain) NSString *userSignature;
@property (nonatomic , retain) NSString *bundleIdentifier;
@property (nonatomic , retain) NSString *bundleVersion;
@property (nonatomic , retain) NSString *appVersion;
@property (nonatomic , retain) NSString *asMoreAppsURL;
@property (nonatomic , retain) NSString *asRateUsURL;
@property (nonatomic , retain) NSString *supportEmail;
@property (nonatomic) BOOL isHideAds;
@property (nonatomic) BOOL isUnityApp;
@property (nonatomic , weak) id<ConsoliAdsMediationInAppDelegate> _inAppDelegate;

+ (ConsoliAds*)sharedInstance ;
- (NSString*)getStore;
- (ConsoliAdsShowAdMechanism)getShowAdMechanism;
- (void)setDelegate:(id<ConsoliAdsMediationDelegate>)delegate;
- (void)setInterstitialAdDelegate:(id<ConsoliAdsMediationInterstitialAdDelegate>)delegate;
- (void)setRewardedAdDelegate:(id<ConsoliAdsMediationRewardedAdDelegate>)delegate;
- (void)setIconAdDelegate:(id<ConsoliAdsMediationIconAdDelegate>)delegate;
- (void)onPostFetchMediation ;
- (void)enableLog:(BOOL)value;
- (void)hideAllAds;
- (void)setIsCOPPA:(BOOL)value;
- (void)loadRewarded:(PlaceholderName)placeholderName;
- (BOOL)isInterstitialAvailable:(PlaceholderName)placeholderName;
- (BOOL)isRewardedVideoAvailable:(PlaceholderName)placeholderName;
- (void)initialize:(BOOL)isDevMode boolUserConsent:(BOOL)userConsent viewController:(UIViewController*)viewControler;
- (void)initializeWithUserConsent:(BOOL)userConsent sdkVersion:(NSString*)sdkVersion sdkId:(NSString*)sdkId viewController:(UIViewController *)viewControler;
- (void)setShowAdMechanism:(ConsoliAdsShowAdMechanism)showAdMechanism;
- (void)showInterstitial:(PlaceholderName)placeholderName viewController:(UIViewController*_Nonnull)viewController;
- (void)showRewardedVideo:(PlaceholderName)placeholderName viewController:(UIViewController*)viewController;
- (void)onAdLoadSuccess:(AdNetworkName)adNetworkName format:(AdFormat)format;
- (void)onAdLoadFailed:(AdNetworkName)adNetworkName format:(AdFormat)format;
- (void)onAdShowSuccess:(AdNetworkName)adNetworkName format:(AdFormat)format;
- (void)onRewardedVideoAdCompleted:(AdNetworkName)adNetworkName;
- (void)onAdClick:(AdNetworkName)adNetworkName format:(AdFormat)format;
- (void)onAdClickWithProdId:(AdNetworkName)adNetworkName format:(AdFormat)format featureId:(NSString *)featureId;
- (void)onAdShowFailed:(AdNetworkName)adNetworkName format:(AdFormat)format;
- (void)consoliAdsInitializationSucceeded;
- (void)onAdClosed: (AdNetworkName)adNetworkName format:(AdFormat)format;
- (void)onGetRTBSuccess:(AdFormat)adType index:(int)index newScene:(CAScene*)newScene;
- (void)onGetRTBFail:(AdFormat)requestedAdType index:(int)index ;
- (MediationManager*)getMediationManager;
- (void)notifyEngineONError;
- (void)onAdLoadSuccess:(AdNetworkName)adNetworkName format:(AdFormat)format forIndex:(int)index;
- (void)onAdLoadFailed:(AdNetworkName)adNetworkName format:(AdFormat)format forIndex:(int)index;
- (CANativeMediationDetails*)getNativeAdMediationDetails:(PlaceholderName)placeholder;
- (void)notifyOnSyncUserDeviceCompleted:(NSString*)data;
- (void)addAdmobTestDevice:(NSString *)deviceId;
- (UIViewController*)getRootViewController;
- (void)loadNativeAdInViewController:(UIViewController *)viewController
                    placeholder:(PlaceholderName)placeholderName
                            delegate:(id<CANativeAdRequestDelegate>)delegate;
- (void)resetNativeAdView:(UIView <CANativeAdRenderingDelegate>*)nativeAdView;
- (void)onNativeLoadFailed:(AdNetworkName)adNetworkName viewController:(UIViewController*)viewController delegate:(nonnull id<CANativeAdRequestDelegate>)delegate;

- (void)fireOnAdFailToShowEvent:(AdNetworkName)adNetworkName format:(AdFormat)format;

- (void)onAdLoadFailedInSceneEvent:(AdFormat)format placeholder:(PlaceholderName)placeholderName;

- (void)replaceCurrentBanner:(UIView* _Nullable)view ;

- (void)showBanner:(PlaceholderName)placeholderName bannerView:(CAMediatedBannerView*_Nonnull)bannerView viewController:(UIViewController*_Nullable)viewController;

- (void)onBannerAdNetworkInitialized:(AdNetworkName)adNetworkName status:(BOOL)status requestAd:(BOOL)requestAd;

- (void)onBannerAdLoadSuccess:(AdNetworkName)adNetworkName mediatedAd:(CAMediatedBannerView*)mediatedBanner refreshed:(BOOL)isRefresh;

- (void)onBannerAdLoadFailed:(AdNetworkName)adNetworkName mediatedAd:(CAMediatedBannerView*)mediatedBanner viewController:(UIViewController*)viewController;

- (void)onBannerAdClick:(AdNetworkName)adNetworkName mediatedAd:(CAMediatedBannerView*)mediatedBannerView;
- (void)onBannerAdClickWithProdId:(AdNetworkName)adNetworkName mediatedAd:(CAMediatedBannerView*)mediatedBannerView featureId:(NSString *)featureId;
- (void)onBannerAdClose:(AdNetworkName)adNetworkName bannerView:(CAMediatedBannerView*_Nonnull)bannerView;

- (void)onBannerAdShowFailed:(AdNetworkName)adNetworkName format:(AdFormat)format bannerView:(CAMediatedBannerView*_Nonnull)bannerView;

- (void)onBannerAdPrecacheSuccess:(AdNetworkName)adNetworkName;

- (void)onBannerAdPrecacheFailed:(AdNetworkName)adNetworkName;

- (CAIconAdMediationDetails *)getIconAdMediationDetails:(NSInteger)placeholder;

- (void)onIconAdShowSuccess:(AdNetworkName)adNetworkName placHolderName:(PlaceholderName)placeholderName;

- (void)onIconAdClick:(AdNetworkName)adNetworkName placHolderName:(PlaceholderName)placeholderName;

- (void)showIconAd:(PlaceholderName)placeholderName iconAdView:(UIView*_Nonnull)iconAdView delegate:(id<ConsoliAdsMediationIconAdDelegate>_Nonnull)delegate ;

- (AdNetwork*)getFromAdnetworkList:(AdNetworkName)adNetworkName;

- (void)onIconAdRefresh;

- (void)loadInterstitial:(PlaceholderName)placeholderName;

- (void)setInAppAdDelegate:(id<ConsoliAdsMediationInAppDelegate>_Nonnull)delegate;

- (void) saveAdNetworkRequest:(AdNetwork*)adNetwork;

#pragma mark
#pragma mark AppOpenAds

- (void)loadAppOpenAds:(PlaceholderName)placeholderName orientation:(UIInterfaceOrientation)orientation;

- (void)showAppOpenAds:(PlaceholderName)placeholderName viewController:(UIViewController*_Nonnull)viewController;

- (BOOL)isAppOpenAdsAvailable:(PlaceholderName)placeholderName;

#pragma mark AppOpenAds-AdaptersCallBacks

- (void)onAppOpenAdLoadSuccess:(AdNetworkName)adNetworkName;

- (void)onAppOpenAdLoadFailed:(AdNetworkName)adNetworkName orientation:(UIInterfaceOrientation)orientation;

- (void)onAppOpenAdShowSuccess:(AdNetworkName)adNetworkName;

- (void)onAppOpenAdClosed:(AdNetworkName)adNetworkName;

- (void)onAppOpenAdClicked:(AdNetworkName)adNetworkName;

- (void)onAppOpenAdShowFailed:(AdNetworkName)adNetworkName;

- (void)setAppOpenAdDelegate:(id<ConsoliAdsMediationAppOpenAdDelegate>)appOpenAdDelegate;

@end

NS_ASSUME_NONNULL_END
