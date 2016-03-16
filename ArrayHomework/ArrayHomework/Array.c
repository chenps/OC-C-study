//
//  Array.c
//  ArrayHomework
//
//  Created by 陈培升 on 16/3/15.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "Array.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MallocByCapacity malloc(sizeof(anyPointer)*arr->capacity_);

/********************创建动态数组函数*********************/

Array *creatArr(){
    Array *arr = malloc(sizeof(Array));
    arr->length_ = 0;
    arr->capacity_ = 20;
    arr->values_ = MallocByCapacity;
    return arr;
}

/*******************按顺序添加数组元素函数********************/

void arrAdd(Array *arr,anyPointer value){
    if (arr->length_>=arr->capacity_) {
        arr->capacity_ *= 2;
        anyPointer *oldvalues = arr->values_;
        arr->values_ = MallocByCapacity;
        memcpy(arr->values_, oldvalues, sizeof(anyPointer)*arr->length_);
        free(oldvalues);
    }
    
    arr->values_[arr->length_] = value;
    arr->length_++;
}

/****************查询指定下标数组元素**********************/

anyPointer arrDemand(Array *arr,int index){
    assert(index>=0&&index<arr->length_);
    return arr->values_[index];
}

/********************按指定下标插入数组元素*******************/

void arrAddatIndex(Array *arr,int index,anyPointer value){
    arr->length_++;
    assert(index>=0&&index<arr->length_);
    anyPointer *newArr = malloc(sizeof(anyPointer)*(arr->length_));
    for (int i=0; i<index; i++) {
        newArr[i] = arr->values_[i];
    }
    newArr[index] = value;
    for (int j=index; j<(arr->length_); j++) {
        newArr[j+1] = arr->values_[j];
    }
    arr->values_ = malloc(sizeof(anyPointer)*(arr->length_));
    memcpy(arr->values_, newArr, sizeof(anyPointer)*(arr->length_));
    free(newArr);
}

/*********************改变指定下标数组元素*******************/

void arrChange(Array *arr,int index,anyPointer value){
    assert(index>=0&&index<arr->length_);
    arr->values_[index] = value;
}


/*********************删除定下标数组元素*******************/

void arrDelatIndex(Array *arr,int index){
    assert(index>=0&&index<arr->length_);
    arr->length_--;
    for (int i=index; i<=arr->length_; i++) {
        arr->values_[i]=arr->values_[i+1];
    }
}










