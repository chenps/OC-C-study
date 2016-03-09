//
//  Array.h
//  reLinkedList
//
//  Created by 陈培升 on 16/3/9.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <stdio.h>
#include "creatList.h"

typedef struct Array_{
    int *values;
    int length_;
    int capacity_;
}Array;


Array *CreatArr();
int ArrayGetLength(Array *arr);
void ArrayAdd(Array *arr,int data);

#endif /* Array_h */
