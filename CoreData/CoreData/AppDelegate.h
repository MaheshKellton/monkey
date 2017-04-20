//
//  AppDelegate.h
//  CoreData
//
//  Created by mahesh.pal on 4/20/17.
//  Copyright © 2017 mahesh.pal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

