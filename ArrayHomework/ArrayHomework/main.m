//
//  main.m
//  ArrayHomework
//
//  Created by 陈培升 on 16/3/15.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "Array.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Array *a = creatArr();
        for (int i=0; i<40; i++) {
            arrAdd(a, i);
        }
        arrAddatIndex(a, 3, 50);
        for (int i=0; i < a->length_; i++) {
            printf("%d\n",arrDemand(a,i));
        }
    }
    return 0;
}
