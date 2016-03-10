//
//  creatList.c
//  reLinkedList
//
//  Created by 陈培升 on 16/3/9.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "creatList.h"
#include <stdlib.h>

Node *CreatNode(int data,Node *pre,Node *next){
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->pre = pre;
    node->next = next;
    return node;
}