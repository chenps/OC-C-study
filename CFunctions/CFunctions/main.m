//
//  main.m
//  CFunctions
//
//  Created by 陈培升 on 16/3/4.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "hello.h"
//void printHello();

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
//        NSLog(@"Hello, World!");
//        printHello("陈培升");
//        printf("%d\n",max(20, 9));
        
        for (int i = 0; i<argc; i++) {
            printf("%s\n",argv[i]);
        }
    }
    return 0;
}

//void printHello(){
//    printf("helloC\n");
//}