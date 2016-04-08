//
//  main.m
//  hashmap
//
//  Created by 陈培升 on 16/3/31.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "hashmap.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Hashmap* hm=hash_map_create(hash_hash_string, hash_compare_string, 128);
        hash_map_set(hm, "C", "Fastest");
        hash_map_set(hm, "Java", "Bytecode");
        hash_map_set(hm, "Lisp", "Puzzle");
        hash_map_set(hm, "Javascript", "Web");
        KeyPair* i=hash_map_iterator(hm);
        while((i=hash_map_next(i))!=NULL){
            printf("%s==>%s\r\n",(char*)i->key, (char*)i->value);
        }
    }
    return 0;
}
