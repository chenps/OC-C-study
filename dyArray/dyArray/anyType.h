//
//  anyType.h
//  dyArray
//
//  Created by 陈培升 on 16/3/27.
//  Copyright © 2016年 chenps. All rights reserved.
//

#ifndef anyType_h
#define anyType_h

#include <stdio.h>
#include <stdlib.h>
#include "Objcet.h"

//定义一个指向任意数据类型的指针结构体anyType，将void*封装为anyType
typedef struct anyType_{
    int retainCount_;
    void *value;
}anyType;


anyType *newValue(void *value);//创建anyType类型值函数；

void *getValue(anyType *value);//取值

#endif /* anyType_h */

