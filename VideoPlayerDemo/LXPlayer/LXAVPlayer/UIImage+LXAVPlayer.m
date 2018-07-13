
//  Created by mxt on 2017/12/5.
//  Copyright © 2017年 mxt. All rights reserved.
//

#import "UIImage+LXAVPlayer.h"

@implementation UIImage (LXAVPlayer)
+(UIImage *)LXPlayer_ImageName:(NSString *)imageName{
    
    NSString *bundlePath =  [[NSBundle mainBundle] pathForResource:@"LXAVPlayer" ofType:@"bundle"];
    
    NSString *path   = [bundlePath stringByAppendingString:[NSString stringWithFormat:@"/%@",imageName]];
    return [UIImage imageWithContentsOfFile:path];
}
@end
