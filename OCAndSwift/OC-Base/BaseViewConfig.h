//
//  BaseViewConfig.h
//  OC-Base
//
//  Created by MYX on 2017/3/21.
//  Copyright © 2017年 邓杰豪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseViewController.h"
#import "BaseTabBarController.h"
#import "BaseTableViewController.h"
#import "BaseNavigationController.h"
#import "BaseCollectionViewController.h"

@interface BaseViewConfig : NSObject
+(UIImageView *)findHairlineImageViewUnder:(UIView *)view;
+(UIImage*)createImageWithColor:(UIColor*)color;
@end
