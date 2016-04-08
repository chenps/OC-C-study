//
//  main.m
//  rePrintList
//
//  Created by 陈培升 on 16/3/28.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "node.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Node *i = creatList(0, 10);//创建一个储存0到10数值，有11个节点的单向链表
        printList(i);//正序打印单向链表
        for (int j=0; j<50; j++) {
            printf("*");
        }
        printf("\n");//分割线
        rePrintList(i);//逆序打印单向链表
    }
    return 0;
}
