//
//  main.m
//  OO
//
//  Created by 陈培升 on 16/3/14.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Hello.h"
//               类               接口
//Objective-c    @interface      @protocal (协议)
//Swift          class           prototal
//Java           class           interface


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Hello * h = [[Hello alloc] init];
        [h sayHello];
        [Hello staticSayHello];
        [h sayHelloTo:@"chen" name2:@"chen1"];
    }
    return 0;
}
