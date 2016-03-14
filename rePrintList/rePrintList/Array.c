//
//  Array.c
//  rePrintList
//
//  Created by 陈培升 on 16/3/14.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "Array.h"
#include <stdlib.h>
#include <string.h>

//定义创建动态数组函数；
Array *creatArr(){
    Array *arr = malloc(sizeof(Array));
    arr->length_ = 0;
    arr->capacity_ = 32;
    arr->values_ = malloc(sizeof(int) * arr->capacity_);
    return arr;
}

//为动态数组添加元素函数;
void arrAdd(Array *arr,int value){
    if (arr->length_ >= arr->capacity_) {
        arr->capacity_*=2;
        int *oldValues=arr->values_;
        arr->values_ = malloc(sizeof(int)*arr->capacity_);
        memcpy(arr->values_, oldValues, sizeof(int)*arr->length_);
        free(oldValues);
    }
    arr->values_[arr->length_]=value;
    arr->length_++;
}
