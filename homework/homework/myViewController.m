//
//  myViewController.m
//  homework
//
//  Created by 陈培升 on 16/3/20.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import "myViewController.h"
#define myNotificationName @"myNotificationName"

@implementation myViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor blueColor];//使当前背景变为蓝色；
    UIButton *button = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    button.frame = CGRectMake(100, 100, 100, 40);
    [button setTitle:@"click" forState:UIControlStateNormal];
    [button setTitle:@"click" forState:UIControlStateHighlighted];//创建按钮
    [button addTarget:self action:@selector(btnclick) forControlEvents:UIControlEventTouchUpInside];//为按钮添加一个监听，当按钮按下时执行btnclick；
    [self.view addSubview:button];
    // Do any additional setup after loading the view, typically from a nib.
}



-(void)btnclick{
    [[NSNotificationCenter defaultCenter] postNotificationName:myNotificationName object:nil userInfo:[NSDictionary dictionaryWithObjectsAndKeys:[UIColor redColor],@"color", nil]];
    [self dismissViewControllerAnimated:YES completion:^{
        
    }];//创建一个字典存入颜色和对应key发送给通知中心
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
