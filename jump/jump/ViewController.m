//
//  ViewController.m
//  jump
//
//  Created by 陈培升 on 16/3/28.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import "ViewController.h"
#import "JKViewController.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    [btn setTitle:@"click" forState:UIControlStateNormal];
    [btn setTitle:@"click" forState:UIControlStateHighlighted];
    btn.frame = CGRectMake(100, 100, 100, 40);
    [btn addTarget:self action:@selector (btnClick:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(getNotify:) name:@"JKSetGreenNotification" object:nil];
    // Do any additional setup after loading the view, typically from a nib.
}

-(void)btnClick:(id)sender{
    JKViewController *controller = [[JKViewController alloc] init];
    controller.delegate = self;
    __weak ViewController *weakSelf = self;
    [controller setSBlock:^(UIColor *color){
        weakSelf.view.backgroundColor = color;
    }];
    
    [self presentViewController:controller animated:YES completion:^{
        
    }];
}

-(void)getNotify:(NSNotification *)noti{
    //UIColor *color = (UIColor *)noti.object;
    UIColor *color = [noti.userInfo objectForKey:@"color"];
    self.view.backgroundColor = color;
}
-(void)setColor:(UIColor*)color{
    self.view.backgroundColor = color;
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
-(void)dealloc{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}
@end
