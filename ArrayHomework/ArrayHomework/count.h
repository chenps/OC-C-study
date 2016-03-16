//
//  count.h
//  ArrayHomework
//
//  Created by 陈培升 on 16/3/15.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef count_h
#define count_h

#include <stdio.h>

typedef struct Count_{
    int Recount;
}Count;

void reCount(Count *count);

void releassCount(Count *count);

#endif /* count_h */
