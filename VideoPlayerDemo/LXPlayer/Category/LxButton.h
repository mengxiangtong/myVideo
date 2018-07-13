
//  Created by mxt on 2017/12/5.
//  Copyright © 2017年 mxt. All rights reserved.
//

#import <UIKit/UIKit.h>

#define  Font(f) [UIFont systemFontOfSize:(f)]
#define LXWS(weakSelf)  __weak __typeof(&*self)weakSelf = self
typedef void (^ButtonBlock)(UIButton *button);

@interface LxButton : UIButton
@property(nonatomic,copy)ButtonBlock block;
@property(nonatomic,assign)NSInteger buttonID;

@property(nonatomic,assign)CGSize enlargeSize;

-(void)addClickBlock:(ButtonBlock)block;

+(LxButton *)LXButtonWithTitle:(NSString *)title  titleFont:(UIFont *)titleLabelFont Image:(UIImage *)image backgroundImage:(UIImage *)backgroundImage backgroundColor:(UIColor *)backgroundColor titleColor:(UIColor *)titleLabelColor frame:(CGRect)frame;

+(LxButton *)LXButtonNoFrameWithTitle:(NSString *)title  titleFont:(UIFont *)titleLabelFont Image:(UIImage *)image backgroundImage:(UIImage *)backgroundImage backgroundColor:(UIColor *)backgroundColor titleColor:(UIColor *)titleLabelColor;
@end
