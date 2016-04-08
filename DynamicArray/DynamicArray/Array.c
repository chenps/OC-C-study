//
//  Array.c
//  DynamicArray
//
//  Created by 陈培升 on 16/3/8.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "Array.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>

Array *ArrayCreat(){
    Array *arr=malloc(sizeof(Array));
    arr->length_=0;
    arr->capacity_=32;
    arr->values_=malloc(sizeof(AnyPointer)*arr->capacity_);
    return arr;
}


int ArrayGetLength(Array *arr){
    return arr->length_;
}


void ArrayAdd(Array *arr,AnyPointer value){
    if (arr->length_>=arr->capacity_) {
        arr->capacity_*=2;
        AnyPointer *oldValues = arr->values_;
        arr->values_=malloc(sizeof(AnyPointer)*arr->capacity_);
        memcpy(arr->values_,oldValues,arr->length_*sizeof(AnyPointer));
        free(oldValues);
    }
    arr->values_[arr->length_]=value;
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

AnyPointer ArrayGet(Array *arr, int index){
    assert(index>=0&&index<=arr->length_);//断言
    return arr->values_[index];
}


void ArrayDestroy(Array *arr){
    free(arr->values_);
    free(arr);
    printf("arr was destroyd\n");
}