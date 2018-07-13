
//  Created by mxt on 2017/12/5.
//  Copyright © 2017年 mxt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIWindow (LXCurrentViewController)
/*!
 @method currentViewController
 
 @return Returns the topViewController in stack of topMostController.
 */
+ (UIViewController*)lx_currentViewController;
@end
