//
//  anyType.c
//  arraywithmem
//
//  Created by 陈培升 on 16/3/21.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "anyType.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void retainCount(anyType *any){
    any->retainCount_++;
}

void releaseCount(anyType *any){
    any->retainCount_--;
    if (any->retainCount_==0) {
        free(any);
    }
}

int getCount(anyType *any){
    return any->retainCount_;
}