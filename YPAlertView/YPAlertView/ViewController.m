//
//  ViewController.m
//  YPAlertView
//
//  Created by 胡云鹏 on 15/11/11.
//  Copyright © 2015年 tyiti. All rights reserved.
//

#import "ViewController.h"
#import "YPAlertView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [YPAlertView alertViewShowTitle:@"标题" andMessage:@"信息" andCancelButtonTitle:@"取消" andOtherButtonTitles:@[@"确定"] andAction:^(NSInteger buttonIndex) {
            NSLog(@"%ld",buttonIndex);
        }];
    });
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
