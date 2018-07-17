
//  Created by mxt on 2017/12/5.
//  Copyright © 2017年 mxt. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MTPlayModel;

@interface MTAVPlayView : UIView


//是否可以设置为横屏
@property(nonatomic,assign)BOOL isLandScape;

//是否自动播放
@property(nonatomic,assign)BOOL isAutoReplay;

@property(nonatomic,strong)MTPlayModel          *currentModel;//当前模型

/*返回按钮的回调*/
@property(nonatomic,copy)BackBlock backBlock;

/**销毁播放器*/
-(void)destroyPlayer;

@end
