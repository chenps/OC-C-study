//
//  main.m
//  OCDic
//
//  Created by 陈培升 on 16/3/20.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
//        NSDictionary * dic = [NSDictionary dictionaryWithObjectsAndKeys:@"chen",@"1",@"chen2",@"2", nil];
//        NSLog(@"%@",[dic objectForKey:@"1"]);
        
        NSMutableDictionary * dic = [[NSMutableDictionary alloc] init];
        [dic setObject:@"chenpeisheng" forKey:@"name"];
        NSLog(@"%@\n",[dic objectForKey:@"name"]);
    }
    return 0;
}
