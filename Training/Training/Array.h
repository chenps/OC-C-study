//
//  Array.h
//  Training
//
//  Created by 陈培升 on 16/3/13.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <stdio.h>

typedef struct Array_{
    int length_;
    int capacity_;
    int *values_;
}Array;

Array *creatArr();

void arrAdd(Array *arr,int value);

#endif /* Array_h */
