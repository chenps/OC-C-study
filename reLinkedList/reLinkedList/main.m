//
//  main.m
//  reLinkedList
//
//  Created by 陈培升 on 16/3/7.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "creatList.h"
#import "Array.h"


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Array *arr=CreatArr();
        for (int i=0; i<20; i++) {
            ArrayAdd(arr, i);
        }
        
        for (int j=0; j<arr->length_; j++) {
            printf("%d\n",arr->values[j]);
        }
    }
    return 0;
}
