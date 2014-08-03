//
//  SLRCMasterViewController.h
//  BereaTest_001
//
//  Created by Air on 3/08/14.
//  Copyright (c) 2014 Sobrelaroca. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SLRCDetailViewController;

#import <CoreData/CoreData.h>

@interface SLRCMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) SLRCDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
