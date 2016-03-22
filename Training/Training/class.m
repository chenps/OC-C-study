//
//  class.m
//  Training
//
//  Created by 陈培升 on 16/3/17.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import "class.h"
#import "hello.h"

@implementation say

-(instancetype)init:(NSString *)name1 age:(int)age{
    self = [super init];
    if (self) {
        age_=age;
        name=name1;
        NSLog(@"is init\n");
        }
    return self;
}

-(NSString *)getName{
    return name;
}

-(int)getAge{
    return age_;
}

+(void)sayHello{
    NSLog(@"hello world\n");
}

-(void)sayHellTo:(char *)name1 :(int)age1{
    
    printf("hello %s,you age is %d\n",name1,age1);
}

@end
