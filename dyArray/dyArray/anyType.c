//
//  anyType.c
//  dyArray
//
//  Created by 陈培升 on 16/3/27.
//  Copyright © 2016年 chenps. All rights reserved.
//

#include "anyType.h"

anyType *newValue(void *value){
    anyType *newValue = malloc(sizeof(anyType));//分配内存
    newValue->value = value;//赋值
    return newValue;
}

void *getValue(anyType *value){
    return value->value;
}