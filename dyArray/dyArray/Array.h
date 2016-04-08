//
//  Array.h
//  dyArray
//
//  Created by 陈培升 on 16/3/28.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "Object.h"
typedef struct _Array{
    int retainCount_;
    int length_;
    int capacity_;
    Object **values_;
} Array;

Array *ArrayCreat();

void ArrayAdd(Array *arr,Object *value);

void ArrayRemove(Array *arr,int index);

Object * ArrayGet(Array *arr, int index);

void ArrayDestroy(Array *arr);

#endif /* Array_h */
