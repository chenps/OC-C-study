//
//  map.c
//  map
//
//  Created by 陈培升 on 16/3/30.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "map.h"
Map *creatMap(){
    Map *map = malloc(sizeof(Map));
    map->length_ = 0;
    map->capacity_ = 32;
    map->values_ = malloc(sizeof(Node)*map->capacity_);
    return map;
}

void mapAdd(Map *map,Object *key,Object *value){
    if (map->length_>=map->capacity_) {
        map->capacity_ *= 2;
        Node **oldvalues = map->values_;
        map->values_ = malloc(sizeof(Node)*map->capacity_);
        memcpy(map->values_, oldvalues, sizeof(Node)*map->length_);
        free(oldvalues);
    }
    map->values_[map->length_] = malloc(sizeof(Node));
    map->values_[map->length_]->value.key = key;
    map->values_[map->length_]->value.value = value;
    map->values_[map->length_]->next = NULL;
    if (map->length_!=0) {
        map->values_[map->length_-1]->next = map->values_[map->length_];
    }
    map->length_++;
    RetainCount_((Object*)map->values_);
    
}