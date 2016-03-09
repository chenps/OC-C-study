//
//  Integer.c
//  DynamicArray
//
//  Created by 陈培升 on 16/3/9.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "Integer.h"
#include <stdlib.h>
#include "Object.h"

Integer* IntegerNew(int32_t value){
    Integer* ins = malloc(sizeof(Integer));
    ins->value_=value;
    ObjectRetain((Object*)ins);
    return ins;
}

int32_t IntegerGet(Integer* ins){
    return ins->value_;
}