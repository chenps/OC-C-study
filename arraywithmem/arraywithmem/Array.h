//
//  Array.h
//  arraywithmem
//
//  Created by 陈培升 on 16/3/21.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <stdio.h>
#include "anyType.h"
#include "anyT.h"

typedef struct Array_{
    int length_;
    int capacity_;
    anyT **values_;
}Array;

Array *creatArr();
void arrAdd(Array *arr,anyT *value);
void ArrayRemove(Array *arr,int index);



#endif /* Array_h */
