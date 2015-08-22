//
//  XYAppDelegate.h
//  webrtc-xmpp-demo
//
//  Created by Russell.Y on 15/8/22.
//  Copyright (c) 2015年 RussellY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYAppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, strong) UIWindow *window;
@property (nonatomic, weak) UINavigationController *homeNaigationController;

+ (XYAppDelegate *)defaultDelegate;

@end
