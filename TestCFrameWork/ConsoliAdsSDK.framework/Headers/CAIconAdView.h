//
//  CAIconAdView.h
//  ConsoliAd
//
//  Created by fazalWFH on 7/25/20.
//  Copyright © 2020 FazalElahi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ConsoliAdsSDK/ConsoliAdsIconAdSizes.h>

@class IconAdBase;

NS_ASSUME_NONNULL_BEGIN

@interface CAIconAdView : UIView

@property (nonatomic, weak) UIViewController *rootViewController;

- (void)setAnimationType:(CAIconAnimationTypes)animationType animationDuration:(BOOL)isInfinite;

- (void)prepareViewWithIconAd:(IconAdBase*)ad;

- (BOOL)shouldRefreshIcon;

- (void)destroy;

@end

NS_ASSUME_NONNULL_END
