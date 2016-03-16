//
//  Array.h
//  ArrayHomework
//
//  Created by 陈培升 on 16/3/15.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <stdio.h>
#include "count.h"

typedef void* anyPointer;

typedef struct Array_{
    int length_;
    int capacity_;
    anyPointer *values_;
}Array;

Array *creatArr();

void arrAdd(Array *arr,anyPointer value);

void arrAddatIndex(Array *arr,int index,anyPointer value);

anyPointer arrDemand(Array *arr,int index);

void arrChange(Array *arr,int index,anyPointer value);

void arrDelatIndex(Array *arr,int index);

void DestroyArr(Array *arr);

#endif /* Array_h */
