//
//  CAmediatedBannerView.h
//  ConsoliMediation
//
//  Created by saira on 24/10/2019.
//  Copyright © 2019 ConsoliAds. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import "CAMediationConstants.h"

@class AdNetwork;
@protocol CAMediatedBannerAdViewDelegate;

@interface CAMediatedBannerView : UIView

@property (nonatomic , readonly) CGSize customSize;
@property (nonatomic, weak) id<CAMediatedBannerAdViewDelegate> delegate;
@property (nonatomic) PlaceholderName bannerPlaceholderName;
@property (nonatomic) BannerState bannerState;
@property (nonatomic) float bannerLoadTime;
@property (nonatomic, readonly) BOOL isCustomBanner;
@property (nonatomic) BOOL shouldResizeSelf;

- (void)setCustomBannerSize:(CGSize)size;
- (void)destroyBanner;
- (BOOL)canLoadBanner: (PlaceholderName)placeholderName;
- (void)setAdNetwork:(AdNetwork*)adNetwork placHolderName:(PlaceholderName)placeholderName;
- (AdNetwork*)getAdnetwork;
- (void)setBannerState:(BannerState)bannerState;
- (BannerState)getBannerState;
- (void)onBannerAdFailToShowEvent;
- (void)onAdLoadFailed;
- (CGSize)getBannerRectSize;

@end

@protocol CAMediatedBannerAdViewDelegate <NSObject>

@optional

- (void)onBannerAdLoaded:(CAMediatedBannerView*)bannerView;

- (void)onBannerAdLoadFailed:(CAMediatedBannerView*)bannerView;

- (void)onBannerAdClicked:(NSString *)featureId ;

- (void)onBannerAdRefreshEvent;

@end

