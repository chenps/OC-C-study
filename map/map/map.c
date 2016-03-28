//
//  map.c
//  map
//
//  Created by 陈培升 on 16/3/27.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "map.h"
KeyPair *creatKeyPair(char *key,char *value){
    KeyPair *keypair = malloc(sizeof(KeyPair));
    keypair->key = key;
    keypair->value = value;
    return keypair;
}


Map *creatMap(){
    Map *map = malloc(sizeof(Map));
    map->size = 0;
    map->capacity = 32;
    map->node = malloc(sizeof(KeyPair)*map->capacity);//为键值对分配空间
    for (int i=0; i<=map->capacity; i++) {
        map->node[i] = creatKeyPair(NULL,NULL);//存入空值，创建一个空的字典
    }
    return map;
}

void MapAdd(Map *map, char *key,char *value){
    if (map->size>=map->capacity) {//使用动态数组的原理创建动态键值对储存空间
        map->capacity*=2;
        KeyPair **oldvalue = malloc(sizeof(KeyPair*)*map->size);
        oldvalue=map->node;
        map->node = malloc(sizeof(KeyPair)*map->capacity);
        for (int i=0; i<=map->capacity; i++) {
            map->node[i] = creatKeyPair(NULL,NULL);
        }
        memcpy(map->node, oldvalue, sizeof(KeyPair*)*map->size);
        free(oldvalue);
    }
    map->node[map->size] = creatKeyPair(key, value);
    map->size++;
}

char *getValue(Map *map,char *key){
    int j=-1;//将j初始化为－1
    for (int i=0; i<map->size; i++) {
        if (map->node[i]->key == key) {
            j=i;//通过循环遍历找到对应键值对所在下标存入j
        }
    }
    if (j>=0) {
        return map->node[j]->value;//取出对应值
    }//因为数组下标不可能是－1，所以如果循环遍历后仍然找不到对应值，j就会是初始值－1，所以此时判断输入值无效
    return "无效key，找不到对应值";
}

KeyPair *getKeyPair(Map *map,int index){
    return map->node[index];
}

char *getKey(Map *map,char *value){
    int j=-1;//将j初始化为－1
    for (int i=0; i<map->size; i++) {
        if (map->node[i]->value == value) {
            j=i;//通过循环遍历找到对应键值对所在下标存入j
        }
    }
    if (j>=0) {
        return map->node[j]->key;//取出对应key
    }//因为数组下标不可能是－1，所以如果循环遍历后仍然找不到对应值，j就会是初始值－1，所以此时判断输入值无效
    return "无效值，找不到对应key";
}

void MapRemoveAtKey(Map *map, char *key){
    int j=-1;//将j初始化为－1
    for (int i=0; i<map->size; i++) {
        if (map->node[i]->key == key) {
            j=i;//通过循环遍历找到对应键值对所在下标存入j
        }
    }
    if (j>=0) {
        for (; j<map->size; j++) {
            map->node[j]=map->node[j+1];//取代对应键值对
        }
        map->size--;
    }else{
        printf("无效输入，找不到对应值\n");
    }//因为数组下标不可能是－1，所以如果循环遍历后仍然找不到对应值，j就会是初始值－1，所以此时判断输入值无效
}

void MapRemoveAtValue(Map *map, char *value){
    int j=-1;//将j初始化为－1
    for (int i=0; i<map->size; i++) {
        if (map->node[i]->value == value) {
            j=i;//通过循环遍历找到对应键值对所在下标存入j
        }
    }
    if (j>=0) {
        for (; j<map->size; j++) {
            map->node[j]=map->node[j+1];//取代对应键值对
        }
        map->size--;
    }else{
        printf("无效输入，找不到对应值\n");
    }//因为数组下标不可能是－1，所以如果循环遍历后仍然找不到对应值，j就会是初始值－1，所以此时判断输入值无效
}
