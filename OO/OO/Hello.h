//
//  hello.h
//  OO
//
//  Created by 陈培升 on 16/3/20.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "human.h"

typedef enum : NSUInteger {
    Gender_Male,
    Gender_Female
} Gender;

@interface hello : NSObject <human>

-(instancetype)init:(NSString *)name age:(int)age;

+(void)sayHi;

-(void)sayHelloTO:(NSString *)name age:(int)age;

-(int)getAge;

-(NSString *)getName;

@property Gender gender;

@end
