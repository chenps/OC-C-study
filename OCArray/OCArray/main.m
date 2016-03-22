//
//  main.m
//  OCArray
//
//  Created by 陈培升 on 16/3/20.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
//        NSArray * arr = [[NSArray alloc] initWithObjects:@"chen1",@"chen2",[NSString stringWithFormat:@"100"], nil];
//        NSLog(@"%d",((NSString *)[arr objectAtIndex:2]).intValue);
        NSMutableArray * arr = [[NSMutableArray alloc] init];
        for (int i=0; i<100; i++) {
            [arr addObject:[NSString stringWithFormat:@"%d",i]];
        }
        NSLog(@"%@",arr);
    }
    return 0;
}
