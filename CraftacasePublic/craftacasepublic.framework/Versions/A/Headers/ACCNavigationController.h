//
//  ACCNavigationController.h
//  CraftACaseApp
//
//  Created by Thayaparan Tharmanantha on 5/25/15.
//  Copyright (c) 2015 4 Axis Solutions (Pvt) Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ACCNavigationController : UINavigationController

+(id)getNavigationControllerWithRootViewController:(UIViewController *)rootViewController;
-(void)disableSlidePanGestureForLeftMenuIfAvailable;
-(void)openLeftMenuIfAvailable;

@end
