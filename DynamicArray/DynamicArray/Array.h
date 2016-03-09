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
#include "Object.h"

typedef Object* AnyPointer;

typedef struct _Array{
    int length_;
    int capacity_;
    AnyPointer *values_;
} Array;

Array *ArrayCreat();

int ArrayGetLength(Array *arr);

void ArrayAdd(Array *arr,AnyPointer value);

void ArrayRemove(Array *arr,int index);

AnyPointer ArrayGet(Array *arr, int index);

void ArrayDestroy(Array *arr);

#endif /*Array_h*/