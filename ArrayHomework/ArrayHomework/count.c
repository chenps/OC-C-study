//
//  count.c
//  ArrayHomework
//
//  Created by 陈培升 on 16/3/15.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "count.h"

void reCount(Count *count){
    count->Recount++;
}

void releassCount(Count *count){
    count->Recount--;
}
