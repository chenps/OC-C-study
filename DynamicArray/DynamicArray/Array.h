//
//  Array.h
//  DynamicArray
//
//  Created by 陈培升 on 16/3/8.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <stdio.h>

typedef struct _Array{
    int length_;
    int capacity_;
    int *values_;
} Array;

Array *ArrayCreat();

int ArrayGetLength(Array *arr);

void ArrayAdd(Array *arr,int value);

int ArrayGet(Array *arr, int index);

#endif /*Array_h*/