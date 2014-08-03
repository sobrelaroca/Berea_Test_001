//
//  SLRCDetailViewController.h
//  BereaTest_001
//
//  Created by Air on 3/08/14.
//  Copyright (c) 2014 Sobrelaroca. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SLRCDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
