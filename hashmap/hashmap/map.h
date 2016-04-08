//
//  map.h
//  hashmap
//
//  Created by 陈培升 on 16/4/2.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef map_h
#define map_h

#include <stdio.h>
typedef struct MapNode_{
    int hash;
    char *key;
    void *value;
    struct MapNode_ *next;
}MapNode;

MapNode *creatMapNode(char *key,void *value,MapNode *next);
#endif /* map_h */
