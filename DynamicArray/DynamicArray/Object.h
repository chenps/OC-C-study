//
//  Object.h
//  DynamicArray
//
//  Created by 陈培升 on 16/3/9.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef Object_h
#define Object_h

#include <stdio.h>



//引用计数
typedef struct Object_{
    int retainCount_;
} Object;

#define OBJECT_RETAIN(obj) ObjectRetain((Object*)obj)
#define OBJECT_RELEASS(obj) ObjectReleass((Object*)obj)
#define OBJECT_RETAIN_COUNT(obj) ObjectRetainCount((Object*)obj)


void ObjectRetain(Object *obj);
void ObjectReleass(Object *obj);

int ObjectRetainCount(Object *obj);

#endif /* Object_h */
