//
//  anyType.h
//  arraywithmem
//
//  Created by 陈培升 on 16/3/21.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef anyType_h
#define anyType_h

#include <stdio.h>
typedef struct anyType_{
    int retainCount_;
}anyType;

void retainCount(anyType *any);
void releaseCount(anyType *any);
int getCount(anyType *any);
#endif /* anyType_h */
