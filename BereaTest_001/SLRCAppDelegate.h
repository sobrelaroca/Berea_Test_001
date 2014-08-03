//
//  SLRCAppDelegate.h
//  BereaTest_001
//
//  Created by Air on 3/08/14.
//  Copyright (c) 2014 Sobrelaroca. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SLRCAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
