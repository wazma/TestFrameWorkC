//
//  AdNetwork.h
//  ConsoliAdsMediation
//
//  Created by FazalElahi on 15/10/2018.
//  Copyright © 2018 ConsoliAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//#import "CANativeAdRequestDelegate.h"
//#import "CANativeAdRenderingDelegate.h"
#import "ConsoliAdsMediationDelegate.h"
#import "ConsoliAdsMediationIconAdDelegate.h"
#import "CADelegate.h"
#import "CAMediatedBannerView.h"
#import "CAMediationConstants.h"

NS_ASSUME_NONNULL_BEGIN

@class CAMediatedBannerView;
@class ConsoliAdsMediation;

@interface AdNetwork : NSObject {
    BOOL _isInitialized;
}

@property (nonatomic , weak) id<CADelegate> caDelegate;

@property(nonatomic) BOOL isInitialized;

@property (nonatomic , retain) NSMutableDictionary *adIDs;

@property(nonatomic) RequestState isAdLoaded;

@property(nonatomic) BannerSize bannerSize;

- (BOOL)isValidAdID:(NSString*)adID;

-(void)runOnUIThread:(void (^)(void))completionHandler;

- (void)updateHastable:(CAMediatedBannerView*)mediatedBannerView;

@end

NS_ASSUME_NONNULL_END
