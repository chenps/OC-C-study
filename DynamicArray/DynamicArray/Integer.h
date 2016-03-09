//
//  Integer.h
//  DynamicArray
//
//  Created by 陈培升 on 16/3/9.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef Integer_h
#define Integer_h

#include <stdio.h>

typedef struct Integer_{
    int retainCount_;
    int value_;
}Integer;

Integer* IntegerNew(int32_t value);
int32_t IntegerGet(Integer* ins);
#endif /* Integer_h */
