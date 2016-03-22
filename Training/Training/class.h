//
//  class.h
//  Training
//
//  Created by 陈培升 on 16/3/17.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "hello.h"

@interface say: NSObject <hello>{
    int age_;
    NSString *name;
}

+(void)sayHello;
-(void)sayHellTo:(char *)name :(int)age;

typedef struct man_ {
    char *name;
    int age_;
}man;

@end
