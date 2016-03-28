//
//  main.m
//  map
//
//  Created by 陈培升 on 16/3/27.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "map.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Map *map = creatMap();
        MapAdd(map, "key1", "第一个值");
        MapAdd(map, "key2", "第二个值");
        MapAdd(map, "key3", "第三个值");
        MapAdd(map, "key4", "第四个值");
        MapAdd(map, "key5", "第五个值");
        MapAdd(map, "key6", "第六个值");
        MapAdd(map, "key7", "第七个值");
        MapAdd(map, "key8", "第八个值");
        MapAdd(map, "key9", "第九个值");

        printf("%s\n",getValue(map, "key5"));
        printf("%s\n",getKey(map, "第二个值"));
        
        MapRemoveAtKey(map, "key1");
        MapRemoveAtValue(map, "第九个值");
                
        for (int i=0; i<map->size; i++) {
            printf("%s,%s\n",getKeyPair(map,i)->key,getKeyPair(map,i)->value);
        }
        
    }
    return 0;
}
