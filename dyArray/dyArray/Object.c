//
//  Object.c
//  dyArray
//
//  Created by 陈培升 on 16/3/28.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "Object.h"
void ObjectRetain(Object *obj){
    obj->retainCount_++;
}
void ObjectReleass(Object *obj){
    obj->retainCount_--;
    if (obj->retainCount_<=0) {
        free(obj);
    }
}

int ObjectRetainCount(Object *obj){
    return obj->retainCount_;
}
