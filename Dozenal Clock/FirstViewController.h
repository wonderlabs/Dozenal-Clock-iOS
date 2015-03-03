//
//  FirstViewController.h
//  Dozenal Clock
//
//  Created by Monica Brinkman on 2015-03-01.
//  Copyright (c) 2015 Wonderlabs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentViewController.h"

@interface FirstViewController : UIViewController <UIPageViewControllerDataSource>

@property (strong, nonatomic) UIPageViewController* pageViewController;
@property (strong, nonatomic) NSArray* pageTitles;

@end

