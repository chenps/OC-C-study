//
//  main.m
//  dyArray
//
//  Created by 陈培升 on 16/3/23.
//  Copyright (c) 2016 chenps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Array.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Array *a = newArr();//创建数组；
        
        anyType *b;//创建一个指向任意类型的指针类型；
        
        for (int i=0; i<100; i++) {
            b = newValue(i);//创建任意类型值并赋值给b；此处可以传入任意类型值；
            arrAdd(a, b);
        }
        
        for (int i=0; i<a->length_; i++) {
            printf("%d\n",getValue(getArrValue(a, i)));
        }//通过查询函数和取值函数打印出数组的元素；
        
        printf("%d\n",getCount(a));//打印次数数组的引用次数，因为数组创建了100个元素，所以此时有100个保留计数；

        
        
        for (int i=a->length_; i>0; i--) {
            arrRemove(a, i);//删除数组元素；
        }
        
        printf("%d\n",getCount(a));//打印次数数组的引用次数，因为数组删除了100个元素，所以此时有保留计数是0；
        
        destroyArr(a);//次数数组计数为0，进行销毁；
        
    }
    return 0;
}