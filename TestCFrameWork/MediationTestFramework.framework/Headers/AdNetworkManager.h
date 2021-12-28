//
//  AdNetworkManager.h
//  ConsoliMediation
//
//  Created by Fazal Elahi on 02/03/2021.
//  Copyright © 2021 ConsoliAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdNetwork.h"
#import "CAAdNetworkInitializeListener.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdNetworkManager : NSObject

@property (nonatomic) BOOL userConsent;
@property (nonatomic) AdNetworkState myState;
@property (nonatomic , strong) NSMutableArray* adNetworkInitializeListeners;

- (BOOL)isInitialized;
- (BOOL)isReady;
- (void)notifyInitialized;

@end

NS_ASSUME_NONNULL_END
