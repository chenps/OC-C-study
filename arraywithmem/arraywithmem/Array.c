//
//  Array.c
//  arraywithmem
//
//  Created by 陈培升 on 16/3/21.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "Array.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "anyT.h"

Array *creatArr(){
    Array *arr = malloc(sizeof(Array));
    arr->length_ = 0;
    arr->capacity_ = 20;
    arr->values_ = malloc(sizeof(anyT*)*arr->capacity_);
    return arr;
}

void arrAdd(Array *arr,anyT *value){
    if (arr->length_>=arr->capacity_) {
        arr->capacity_ *= 2;
        anyT **newArr = arr->values_;
        arr->values_ = malloc(sizeof(anyT*)*arr->capacity_);
        memcpy(arr->values_, newArr, sizeof(anyT*)*arr->length_);
        free(newArr);
    }
    arr->values_[arr->length_] = value;
    retainCount(arr->values_[arr->length_]);
    arr->length_++;
}

void ArrayRemove(Array *arr,int index){
    assert(index>=0&&index<arr->length_);
    releaseCount(arr->values_[index]);
    arr->length_--;
    for (int i=index; i<arr->length_; i++) {
        arr->values_[i]=arr->values_[i+1];
    }
}
