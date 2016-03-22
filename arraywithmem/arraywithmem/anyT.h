//
//  anyT.h
//  arraywithmem
//
//  Created by 陈培升 on 16/3/21.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef anyT_h
#define anyT_h

#include <stdio.h>
#include "anyType.h"

typedef struct anyT_{
    int retainCount_;
    anyType *value_;
}anyT;

anyT *newany(anyType *value);

anyType *getValue(anyT *value);

#endif /* anyT_h */
