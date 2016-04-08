//
//  Array.c
//  dyArray
//
//  Created by 陈培升 on 16/3/28.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "Array.h"
Array *ArrayCreat(){
    Array *arr = malloc(sizeof(Array));
    arr->retainCount_ = 0;
    arr->length_ = 0;
    arr->capacity_ = 32;
    arr->values_ = malloc(sizeof(Object*)*arr->capacity_);
    return arr;
}

void ArrayAdd(Array *arr,Object *value){
    if (arr->length_>=arr->capacity_) {
        arr->capacity_ *= 2;
        Object **oldValues = arr->values_;
        arr->values_ = malloc(sizeof(Object*)*arr->capacity_);
        memcpy(arr->values_, oldValues, sizeof(Object*)*arr->length_);
    }
    arr->values_[arr->length_] = value;
    arr->length_++;
    OBJECT_RETAIN(arr);
}

void ArrayRemove(Array *arr,int index){
    assert(index>=0&&index<arr->length_);
    OBJECT_RELEASS(ArrayGet(arr, index));
    arr->length_--;
    for (int i=index; i<arr->length_; i++) {
        arr->values_[i]=arr->values_[i+1];
    }
}

Object* ArrayGet(Array *arr, int index){
    assert(index>=0&&index<=arr->length_);//断言
    return arr->values_[index];
}


void ArrayDestroy(Array *arr){
    free(arr->values_);
    free(arr);
    printf("arr was destroyd\n");
}