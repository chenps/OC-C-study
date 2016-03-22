//
//  main.m
//  DynamicArray
//
//  Created by 陈培升 on 16/3/8.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Array.h"
#import "Object.h"
#import "Integer.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Integer* i = IntegerNew(32);
        printf("%d\n",IntegerGet(i));
        OBJECT_RELEASS(i);
        
//        Object *obj = malloc(sizeof(Object));
//        ObjectRetain(obj);
        
        Array *arr = ArrayCreat();
        for (int i=0; i<100; i++) {
            ArrayAdd(arr,(Object *)"Hello World");
        }
        
        for (int j=0; j<=arr->length_; j++) {
            printf("%s\n",(char *)ArrayGet(arr, j));
        }
        
        ArrayDestroy(arr);
    }
    return 0;
}
