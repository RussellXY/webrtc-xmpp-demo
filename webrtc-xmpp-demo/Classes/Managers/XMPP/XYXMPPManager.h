//
//  XYXMPPManager.h
//  webrtc-xmpp-demo
//
//  Created by Russell.Y on 15/8/22.
//  Copyright (c) 2015年 RussellY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XMPPFramework.h"

@interface XYXMPPManager : NSObject

@property (nonatomic, readonly, strong) XMPPStream *xmppStream;

@end
