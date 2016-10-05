//
//  ACCLibNavigationController.h
//  CraftACaseApp
//
//  Created by Admin_4Axis_DrawingDesk_iOS on 3/11/16.
//  Copyright © 2016 4 Axis Solutions (Pvt) Ltd. All rights reserved.
//

#import "ACCNavigationController.h"

@protocol ACCLibNavigationControllerDelegate <NSObject>

-(void)ACCLibNavigationControllerDismissed;

@end

@interface ACCLibNavigationController : ACCNavigationController

-(instancetype)initWithImage:(UIImage*)image;

@property(weak) id<ACCLibNavigationControllerDelegate> libNavigationControllerDelegate;

@end