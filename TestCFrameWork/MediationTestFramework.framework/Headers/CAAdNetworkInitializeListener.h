//
//  CAadNetworkInitializeListener.h
//  ConsoliMediation
//
//  Created by saira on 04/12/2020.
//  Copyright © 2020 ConsoliAds. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CAAdNetworkInitializeListener <NSObject>

- (void)onAdNetworkInitialized:(BOOL)status;

@end

NS_ASSUME_NONNULL_END
