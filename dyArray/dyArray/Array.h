//
//  Array.h
//  dyArray
//
//  Created by 陈培升 on 16/3/27.
//  Copyright © 2016年 chenps. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include "Objcet.h"
#include "anyType.h"
#include <assert.h>
#include <string.h>
//定义动态数组结构体
typedef struct Array_ {
    int retainCount_;
    int length_;
    int capacity_;
    anyType **values;
}Array;

Array *newArr();//创建动态数组；

void arrAdd(Array* arr, anyType* value);//为数组增加元素；

void arrRemove(Array* arr, int index);//删除数组元素；

void arrChange(Array* arr, int index,anyType* value);//修改特定位置数组元素；

anyType* getArrValue(Array* arr, int index);//查询特定位置数组元素；

void destroyArr(Array* arr);//销毁数组

#endif /* Array_h */
