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


static int *allocMemoryByCapacity(Array *arr){
    return malloc(sizeof(int)*arr->capacity_);
}

Array *ArrayCreat(){
    Array *arr=malloc(sizeof(Array));
    arr->length_=0;
    arr->capacity_=32;
    arr->values_=allocMemoryByCapacity(arr);
    return arr;
}


int ArrayGetLength(Array *arr){
    return arr->length_;
}


void ArrayAdd(Array *arr,int value){
    if (arr->length_>=arr->capacity_) {
        arr->capacity_*=2;
        int *oldValues = arr->values_;
        arr->values_=allocMemoryByCapacity(arr);
        memcpy(arr->values_,oldValues,arr->length_*sizeof(int));
        free(oldValues);
    }
    arr->values_[arr->length_]=value;
}


int ArrayGet(Array *arr, int index){
    assert(index>=0&&index<arr->length_);
    return arr->values_[index];
}