//
//  CALayer+Tool.h
//  ToolKits
//
//  Created by WuChunlong on 2017/2/19.
//  Copyright © 2017年 WuChunlong. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface CALayer (Tool)

@end

#pragma mark - #pragma mark - CALayer+ShakeAnimation
@interface CALayer (ShakeAnimation)

typedef NS_ENUM(NSInteger, CALayerShakeDirection) {
    CALayerShakeDirectionHorizontal = 0,                         // x
    CALayerShakeDirectionVertical ,  // y
    
    CALayerShakeDirectionDefault = CALayerShakeDirectionHorizontal,
};


/**
  给当前图层添加摇动动画

 @param amplitude 摇动幅度
 @param direction 方向
 */
- (void)shakeWithAmplitude:(CGFloat)amplitude direction:(CALayerShakeDirection)direction;

@end


#pragma mark - #pragma mark - CALayer+Transition
@interface CALayer (Transition)

/*
 *  动画类型
 */
typedef enum{
    
    //水波
    TransitionAnimTypeRippleEffect=0,
    
    //吸走
    TransitionAnimTypeSuckEffect,
    
    //翻开书本
    TransitionAnimTypePageCurl,
    
    //正反翻转
    TransitionAnimTypeOglFlip,
    
    //正方体
    TransitionAnimTypeCube,
    
    //push推开
    TransitionAnimTypeReveal,
    
    //合上书本
    TransitionAnimTypePageUnCurl,
    
    //随机
    TransitionAnimTypeRamdom,
    
}TransitionAnimType;




/*
 *  动画方向
 */
typedef enum{
    
    //从上
    TransitionSubtypesFromTop=0,
    
    //从左
    TransitionSubtypesFromLeft,
    
    //从下
    TransitionSubtypesFromBotoom,
    
    //从右
    TransitionSubtypesFromRight,
    
    //随机
    TransitionSubtypesFromRamdom,
    
}TransitionSubType;


/*
 *  动画曲线
 */
typedef enum {
    
    //默认
    TransitionCurveDefault,
    
    //缓进
    TransitionCurveEaseIn,
    
    //缓出
    TransitionCurveEaseOut,
    
    //缓进缓出
    TransitionCurveEaseInEaseOut,
    
    //线性
    TransitionCurveLinear,
    
    //随机
    TransitionCurveRamdom,
    
}TransitionCurve;




/**
 *  转场动画
 *
 *  @param animType 转场动画类型
 *  @param subtype  转动动画方向
 *  @param curve    转动动画曲线
 *  @param duration 转动动画时长
 *
 *  @return 转场动画实例
 */
-(CATransition *)transitionWithAnimType:(TransitionAnimType)animType subType:(TransitionSubType)subType curve:(TransitionCurve)curve duration:(CGFloat)duration;

@end


// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com
