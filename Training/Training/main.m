//
//  main.m
//  Training
//
//  Created by 陈培升 on 16/3/10.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "class.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        man *s = malloc(sizeof(man));
        s->age_=8;
        s->name="chen";
        say *c = [[say alloc] init:@"chen" age:8];
        NSLog(@"%@,%d",[c getName],[c getAge]);
    }
    return 0;
}


