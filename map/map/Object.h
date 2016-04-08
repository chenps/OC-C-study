//
//  Object.h
//  map
//
//  Created by 陈培升 on 16/3/30.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef Object_h
#define Object_h

#include <stdio.h>
#include <stdlib.h>
typedef struct Object_{
    int RetainCount_;
}Object;

int getCount(Object *obj);
void RetainCount_(Object *obj);
void ReleaseCount_(Object *obj);
#endif /* Object_h */
