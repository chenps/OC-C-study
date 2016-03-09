//
//  Array.c
//  reLinkedList
//
//  Created by 陈培升 on 16/3/9.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "Array.h"
#include <stdlib.h>
#include <string.h>

Array *CreatArr(){
    Array *arr=malloc(sizeof(Array));
    arr->values=malloc(sizeof(int)*arr->capacity_);
    arr->length_=0;
    arr->capacity_=10;
    return arr;
}

int ArrayGetLength(Array *arr){
    return arr->length_;
}

void ArrayAdd(Array *arr,int data){
    if (arr->length_>=arr->capacity_) {
        int *oldValue=arr->values;
        arr->capacity_*=2;
        arr->values=malloc(sizeof(int)*arr->capacity_);
        memcpy(arr->values, oldValue, sizeof(int)*arr->length_);
        free(oldValue);
    }
    arr->values[arr->length_]=data;
    arr->length_++;
}
