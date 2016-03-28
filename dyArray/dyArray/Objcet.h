//
//  Objcet.h
//  dyArray
//
//  Created by 陈培升 on 16/3/23.
//  Copyright (c) 2016 chenps. All rights reserved.
//

#ifndef Objcet_h
#define Objcet_h

#include <stdio.h>
#include <stdlib.h>
//定义一个Object结构体用于计数；
typedef struct Object_{
    int retainCount_;
}Object;

void retainCount(Object *obj);//保留计数

void releaseCount(Object *obj);//释放计数

int getCount(Object *obj);//取得计数

#endif /* Objcet_h */
