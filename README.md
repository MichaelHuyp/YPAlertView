# YPAlertView
## 对UIAlertView 以及 UIAlertController 中的Alert进行的整体封装 适配IOS 9
```objc
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
```
