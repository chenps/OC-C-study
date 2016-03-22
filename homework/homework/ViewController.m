//
//  ViewController.m
//  homework
//
//  Created by 陈培升 on 16/3/20.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import "ViewController.h"
#include "myViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UIButton *button = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    button.frame = CGRectMake(100, 100, 100, 40);
    [button setTitle:@"click" forState:UIControlStateNormal];
    [button setTitle:@"click" forState:UIControlStateHighlighted];
    //创建一个按钮；
    [button addTarget:self action:@selector(btnclick) forControlEvents:UIControlEventTouchUpInside];//给按钮添加一个监听，当按钮按下时执行btnclick函数；
    [self.view addSubview:button];
    [[NSNotificationCenter defaultCenter]addObserver:self selector:@selector(getColor:) name:@"myNotificationName" object:nil];//监听myNotificationName，收到通知后执行getcolor：
    // Do any additional setup after loading the view, typically from a nib.
}


-(void)getColor:(NSNotification *)noti{
    NSDictionary * dict = noti.userInfo;
    self.view.backgroundColor = [dict objectForKey:@"color"];//使当前页面背景色变为字典中key的对应值
    
}

-(void)btnclick{
    myViewController * viewControler = [[myViewController alloc] init];
    [self presentViewController:viewControler animated:YES completion:^{
        
    }];
}

-(void)dealloc{
    [[NSNotificationCenter defaultCenter] removeObserver:self];//移除监听；
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
