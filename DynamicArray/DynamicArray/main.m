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
        ArrayAdd(arr,(AnyPointer)"chen");
        ArrayAdd(arr,(AnyPointer)"chen");
        ArrayAdd(arr,(AnyPointer)"chen");
        ArrayAdd(arr,(AnyPointer)"chen");
        ArrayAdd(arr,(AnyPointer)"chen");
        ArrayAdd(arr,(AnyPointer)"chen");
        ArrayAdd(arr,(AnyPointer)"chen");
        ArrayAdd(arr,(AnyPointer)"chen");
        ArrayAdd(arr,(AnyPointer)"chen");
        
        printf("%s\n",(char *)ArrayGet(arr, 0));
        printf("%s\n",(char *)ArrayGet(arr, 1));
        printf("%s\n",(char *)ArrayGet(arr, 2));
        printf("%s\n",(char *)ArrayGet(arr, 3));
        printf("%s\n",(char *)ArrayGet(arr, 4));
        
        ArrayDestroy(arr);
    }
    return 0;
}
