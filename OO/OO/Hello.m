//
//  Hello.m
//  OO
//
//  Created by 陈培升 on 16/3/14.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import "Hello.h"

@implementation Hello

+(void)staticSayHello{
    NSLog(@"Hello chen\n");
}

-(void)sayHello{
    NSLog(@"Hello World\n");
}

-(void)sayHelloTo:(NSString *)name name2:(NSString *)name1{
    NSLog(@"hello,%@,%@\n",name,name1);
}


@end
