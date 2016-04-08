//
//  main.m
//  map
//
//  Created by 陈培升 on 16/3/30.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "map.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Map *map = creatMap();
        mapAdd(map, (Object*)"chen",(Object*)"xxxxx");
        mapAdd(map, (Object*)"chen",(Object*)"xxxxx");
        mapAdd(map, (Object*)"chen",(Object*)"xxxxx");
        mapAdd(map, (Object*)"chen",(Object*)"xxxxx");
        mapAdd(map, (Object*)"chen",(Object*)"xxxxx");
        mapAdd(map, (Object*)"chen",(Object*)"xxxxx");
        mapAdd(map, (Object*)"chen",(Object*)"xxxxx");
        mapAdd(map, (Object*)"chen",(Object*)"xxxxx");
        for (; map->values_[0]!=NULL;map->values_[0]=map->values_[0]->next) {
            printf("%s,%s\n",(char *)map->values_[0]->value.key,(char *)map->values_[0]->value.value);
            
        }
    }
    return 0;
}
