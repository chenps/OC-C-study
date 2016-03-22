//
//  anyT.c
//  arraywithmem
//
//  Created by 陈培升 on 16/3/21.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "anyT.h"
#include <stdlib.h>

anyT *newany(anyType *value){
    anyT *newvalue = malloc(sizeof(anyT));
    newvalue->value_ = value;
    return newvalue;
}

anyType *getValue(anyT *value){
    return value->value_;
}