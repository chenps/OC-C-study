//
//  main.m
//  dyArray
//
//  Created by 陈培升 on 16/3/28.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "Array.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Array *arr = ArrayCreat();
        ArrayAdd(arr,(Object*)"chen");
        ArrayAdd(arr,(Object*)"chen");
        ArrayAdd(arr,(Object*)"chen");
        ArrayAdd(arr,(Object*)"chen");
        ArrayAdd(arr,(Object*)"chen");
        
        printf("%s\n",(char *)ArrayGet(arr, 0));
        printf("%s\n",(char *)ArrayGet(arr, 1));
        printf("%s\n",(char *)ArrayGet(arr, 2));
        printf("%s\n",(char *)ArrayGet(arr, 3));
        printf("%s\n",(char *)ArrayGet(arr, 4));
        
        ArrayDestroy(arr);

    }
    return 0;
}
