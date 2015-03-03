//
//  PageContentViewController.h
//  Dozenal Clock
//
//  Created by Monica Brinkman on 2015-03-01.
//  Copyright (c) 2015 Wonderlabs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *myLabel;

@property NSString *titleText;
@property NSUInteger pageIndex;

@end
