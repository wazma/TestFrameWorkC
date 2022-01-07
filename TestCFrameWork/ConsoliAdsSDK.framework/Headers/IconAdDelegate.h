//
//  IconAdDelegate.h
//  ConsoliAd
//
//  Created by saira on 17/12/2019.
//  Copyright © 2019 FazalElahi. All rights reserved.
//

#ifndef IconAdDelegate_h
#define IconAdDelegate_h

#import <UIKit/UIKit.h>

@class IconAdBase;

@protocol IconAdDelegate <NSObject>

-(void)didLoadedIconAd:(NSString*)scene;
-(void)didFailedToLoadIconAd:(NSString*)scene error:(NSString *)error;
-(void)didCloseIconAd:(NSString*)scene;
-(void)didClickIconAd:(NSString*)scene productId:(NSString *)redirectionProductId;
-(void)didRefreshIconAd:(NSString*)scene;
-(void)didDisplayIconAd:(NSString*)scene;
-(void)didFailedToDisplayIconAd:(NSString*)scene error:(NSString *)error;

@optional
//For Unity
-(void)didLoadedIconAd:(NSString*)scene iconAd:(IconAdBase*)iconAd;

@end

#endif /* IconAdDelegate_h */
