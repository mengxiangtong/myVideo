
//  Created by mxt on 2017/12/5.
//  Copyright © 2017年 mxt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Expanded)

+(UIColor *) hexStringToColor: (NSString *) stringToConvert;
+(UIColor *) hexStringToColor: (NSString *) stringToConvert andAlpha:(CGFloat)alpha;

+(UIColor *)defaultBackGroundColor;
+(UIColor *)commonBackGroundColor;
+(UIColor *)defaultTitleWordColor;
+(UIColor *)defaultContentWordColor;

@end
