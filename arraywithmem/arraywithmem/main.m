//
//  main.m
//  arraywithmem
//
//  Created by 陈培升 on 16/3/20.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "Array.h"
#include "anyT.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Array *arr = creatArr();
        for (int i=0; i<100; i++) {
            arrAdd(arr, newany(i));
        }
        for (int i=0; i<arr->length_; i++) {
            printf("%d\n",getValue(arr->values_[i]));
        }
        printf("%d\n",getCount(arr));
        for (int i=0; i<20; i++) {
            ArrayRemove(arr, i);
        }
        printf("%d\n",getCount(arr));
        for (int i=0; i<arr->length_; i++) {
            printf("%d\n",getValue(arr->values_[i]));
        }
    }
    return 0;
}
