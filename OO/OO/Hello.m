//
//  hello.m
//  OO
//
//  Created by 陈培升 on 16/3/20.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import "hello.h"

@implementation hello{
    NSString * name_;
    int age_;
}

-(instancetype)init:(NSString *)name age:(int)age;
{
    self = [super init];
    if (self) {
        name_ = name;
        age_ = age;
        NSLog(@"%@,%d is init",name_,age_);
    }
    return self;
}

+(void)sayHi{
    NSLog(@"Hi Objective-C\n");
}

-(void)sayHelloTO:(NSString *)name age:(int)age{
    name_ = name;
    age_ = age;
    NSLog(@"Hello %@,your age is %d\n",name_,age_);
}

-(int)getAge{
    return age_;
}

-(NSString *)getName{
    return name_;
}

@end
