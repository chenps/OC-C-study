//
//  node.h
//  rePrintList
//
//  Created by 陈培升 on 16/3/28.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef node_h
#define node_h

#include <stdio.h>
#include <stdlib.h>
typedef struct Node_{
    int data;
    struct Node_ *next;
}Node;

Node *creatNode(int data,Node *next);

Node *creatList(int firstData,int endData);

void printList(Node *first);

void rePrintList(Node *first);

#endif /* node_h */
