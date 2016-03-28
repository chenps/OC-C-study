//
//  Array.c
//  dyArray
//
//  Created by 陈培升 on 16/3/27.
//  Copyright © 2016年 chenps. All rights reserved.
//

#include "Array.h"
Array *newArr(){
    Array *arr = malloc(sizeof(Array));
    arr->length_ = 0;
    arr->capacity_ = 32;
    arr->values = malloc(sizeof(anyType*)*arr->capacity_);
    return arr;
}

void arrAdd(Array* arr, anyType* value){
    if (arr->length_>=arr->capacity_) {
        arr->capacity_ *= 2;
        anyType **oldvalues = malloc(sizeof(anyType*)*arr->length_);
        oldvalues = arr->values;
        arr->values = malloc(sizeof(anyType*)*arr->capacity_);
        memcpy(arr->values, oldvalues, sizeof(anyType*)*arr->length_);
        free(oldvalues);
    }
    arr->values[arr->length_] = value;
    arr->length_++;
    retainCount((Object*)arr);//当为数组每增加一个元素时，为数组做一次保留计数；
}

void arrRemove(Array* arr, int index){
    assert(index>=0 && index<=arr->length_);
    arr->values[index] = malloc(sizeof(anyType*));
    for (int i=index; i<arr->length_; i++) {
        arr->values[i] = arr->values[i+1];
    }
    arr->length_--;
    releaseCount((Object*)arr);//当每删除一个数组元素时，为数组做一次释放计数；
}

void arrChange(Array* arr, int index,anyType* value){
    assert(index>=0 && index<=arr->length_);
    arr->values[index] = value;
}

anyType* getArrValue(Array* arr, int index){
    assert(index>=0 && index<=arr->length_);
    return arr->values[index];
}

void destroyArr(Array* arr){
    if (getCount((Object*)arr)==0) {//检查如果数组的计数为0则执行销毁操作并打印销毁提示
        free(arr->values);
        free(arr);
        printf("array is destroyd!\n");
    }else{
        printf("Array is still has retain.\n");
    }
}

