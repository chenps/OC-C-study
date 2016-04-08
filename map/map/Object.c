//
//  Object.c
//  map
//
//  Created by 陈培升 on 16/3/30.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "Object.h"
int getCount(Object *obj){
    return obj->RetainCount_;
}

void RetainCount_(Object *obj){
    obj->RetainCount_++;
}

void ReleaseCount_(Object *obj){
    obj->RetainCount_--;
    if (obj->RetainCount_<=0) {
        free(obj);
    }
}