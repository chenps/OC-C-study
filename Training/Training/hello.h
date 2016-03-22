//
//  hello.h
//  Training
//
//  Created by 陈培升 on 16/3/17.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol hello <NSObject>

-(instancetype)init:(NSString *)name age:(int)age;
-(NSString *)getName;
-(int)getAge;

@end
