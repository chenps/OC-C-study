//
//  main.m
//  ManageMemory
//
//  Created by 陈培升 on 16/3/20.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "A.h"


int main(int argc, const char * argv[]) {
    @autoreleasepool {
//        A * a = [[[A alloc] init] autorelease];
//        NSLog(@"%ld\n",[a retainCount]);
//        [a release];
        A *a = [[A alloc] init];
    }
    return 0;
}
