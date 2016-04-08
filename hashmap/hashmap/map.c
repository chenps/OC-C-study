//
//  map.c
//  hashmap
//
//  Created by 陈培升 on 16/4/2.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "map.h"
#include <stdlib.h>
MapNode *creatMapNode(char *key,void *value,MapNode *next){
    MapNode *node = malloc(sizeof(MapNode));
    node->key = key;
    node->value = value;
    node->next = next;
    return node;
}