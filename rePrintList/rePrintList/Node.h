//
//  Node.h
//  rePrintList
//
//  Created by 陈培升 on 16/3/14.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <stdio.h>
#include "Array.h"

//定义链表节点结构；
typedef struct Node_{
    int data;
    struct Node_ *next;
} Node;

Node *creatNode(int data,Node *next);
Node *creatList(int i);
Node *creatReList(Array *arr);
void printList(Node *first);

#endif /* Node_h */
