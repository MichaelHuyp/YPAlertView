//
//  YPAlertView.h
//  YPAlertView
//
//  Created by 胡云鹏 on 15/11/10.
//  Copyright (c) 2015年 tyiti. All rights reserved.
//

#import <UIKit/UIKit.h>

/** 按钮点击触发的回调 */
typedef void(^YPAlertViewBlock)(NSInteger buttonIndex);

@interface YPAlertView : UIView

/** 按钮点击触发的回调 */
@property (nonatomic, copy) YPAlertViewBlock block;

/**
 *  单个按钮样式方法
 */
+ (void)alertViewShowTitle:(NSString *)title andMessage:(NSString *)message andButtonTitle:(NSString *)btnTitle andAction:(YPAlertViewBlock) block;

/**
 *  便捷方法
 */
+ (void)alertViewShowTitle:(NSString *)title andMessage:(NSString *)message andCancelButtonTitle:(NSString *)cancelButtonTitle andOtherButtonTitles:(NSArray *)otherButtonTitles andAction:(YPAlertViewBlock) block;

/**
 *  总方法
 */
+ (void)alertViewShowTitle:(NSString *)title andMessage:(NSString *)message andCancelButtonTitle:(NSString *)cancelButtonTitle andOtherButtonTitles:(NSArray *)otherButtonTitles andAction:(YPAlertViewBlock) block andParentView:(UIView *)view;

@end
