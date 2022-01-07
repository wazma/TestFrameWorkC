//
//  CAUNativeAdDelegate.h
//  ConsoliAd
//
//  Created by Fazal Elahi on 13/09/2021.
//  Copyright © 2021 FazalElahi. All rights reserved.
//

#ifndef CAUNativeAdDelegate_h
#define CAUNativeAdDelegate_h

@protocol CAUNativeAdDelegate <NSObject>

-(void)didLoadNativeAd:(NSString*)scene;
-(void)didFailedToLoadNativeAd:(NSString*)scene error:(NSString *)error;
-(void)didDisplayNativeAd:(NSString*)scene;
-(void)didClickNativeAd:(NSString*)scene productId:(NSString *)redirectionProductId;
-(void)didCloseNativeAd:(NSString*)scene;

@end

#endif /* CAUNativeAdDelegate_h */
