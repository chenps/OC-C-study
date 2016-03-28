//
//  Objcet.c
//  dyArray
//
//  Created by 陈培升 on 16/3/23.
//  Copyright (c) 2016 chenps. All rights reserved.
//

#include "Objcet.h"

void retainCount(Object *obj){
    obj->retainCount_++;
}

void releaseCount(Object *obj){
    obj->retainCount_--;
}

int getCount(Object *obj){
    return obj->retainCount_;
}