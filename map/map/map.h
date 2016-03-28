//
//  map.h
//  map
//
//  Created by 陈培升 on 16/3/27.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef map_h
#define map_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct KeyPair_{//建立键值对结构体
    char *key;
    char *value;
}KeyPair;


typedef struct Map_{//建立字典结构体
    int size;
    int capacity;
    KeyPair **node;
}Map;

KeyPair *creatKeyPair(char *key,char *value);//创建键值对函数
Map *creatMap();//创建空字典函数
void MapAdd(Map *map, char *key,char *value);//为字典添加键值对
char *getValue(Map *map,char *key);//通过key取对应值
char *getKey(Map *map,char *value);//通过值取得对应key
KeyPair *getKeyPair(Map *map,int index);//取得对应位置键值对
void MapRemoveAtKey(Map *map, char *key);//通过key删除相对应键值对
void MapRemoveAtValue(Map *map, char *value);//通过值删除相对应键值对
#endif /* map_h */
