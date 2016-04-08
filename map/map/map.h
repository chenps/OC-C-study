//
//  map.h
//  map
//
//  Created by 陈培升 on 16/3/30.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef map_h
#define map_h

#include <stdio.h>
#include <string.h>
#include "Object.h"
typedef struct KeyPair_{
    Object *key;
    Object *value;
}KeyPair;

typedef struct Node_{
    KeyPair value;
    struct Node_ *next;
}Node;

typedef struct Map_{
    int length_;
    int capacity_;
    Node **values_;
}Map;

Node *creatNode(Object *key,Object *value);
Map *creatMap();
void mapAdd(Map *map,Object *key,Object *value);
#endif /* map_h */
