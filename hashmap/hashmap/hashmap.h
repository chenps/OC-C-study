//
//  hashmap.h
//  hashmap
//
//  Created by 陈培升 on 16/3/31.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef hashmap_h
#define hashmap_h

#include <stdio.h>
#include <stdbool.h>

typedef int (*Comparator)(void*, void*);
typedef int (*Hash)(void*);
typedef struct str_hashmap Hashmap;
typedef struct{//定义键值对；
    void* key;
    void* value;
}KeyPair;

int hash_hash_string(void*);
int hash_compare_string(void*, void*);
Hashmap* hash_map_create(Hash, Comparator, int);
bool hash_map_set(Hashmap*, void*, void*);
void* hash_map_get(Hashmap*, void*);
void* hash_map_remove(Hashmap*, void*);
void hash_map_destory(Hashmap*);
KeyPair* hash_map_iterator(Hashmap* hm);
KeyPair* hash_map_next(KeyPair* it);

#endif /* hashmap_h */
