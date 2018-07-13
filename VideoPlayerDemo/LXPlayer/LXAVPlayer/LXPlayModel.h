
//  Created by mxt on 2017/12/5.
//  Copyright © 2017年 mxt. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface LXPlayModel : NSObject
@property(nonatomic,strong)NSString *playUrl;
@property(nonatomic,strong)NSString *videoTitle;
/**必须是weak 否则会造成循环引用 */
@property(nonatomic,weak)UIView *fatherView;
@end
