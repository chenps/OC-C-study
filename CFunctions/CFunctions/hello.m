//
//  hello.m
//  CFunctions
//
//  Created by 陈培升 on 16/3/4.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "hello.h"

void printHello(char *name){
    printf("hello,%s\n",name);
}

int max(int a,int b){
//    if (a>b) {
//        return a;
//    }else{
//        return b;
//    }
    return a>b?a:b;//if-else的另一种写法
}