//
//  JJLoginProvider.h
//  MIGUDEMO
//
//  Created by luming on 2018/6/12.
//  Copyright © 2018年 luming. All rights reserved.
//

#import "JJBaseModuleProvider.h"

@interface JJLoginProvider : JJBaseModuleProvider

+ (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;


- (void)showOnViewController:(UIViewController *)targetViewController success:(void(^)(id signInfo))successBlock fail:(void(^)(id signInfo))failBlock;

- (UIViewController *)viewControllerWithInfo:(id)userInfo needNew:(BOOL)needNew callback:(JJModuleCallbackBlock)callback;
@end
