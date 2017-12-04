//
//  AppDelegate.h
//  BasicProject
//
//  Created by niudengjun on 2017/12/4.
//  Copyright © 2017年 niudengjun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

