//
//  Node.c
//  Training
//
//  Created by 陈培升 on 16/3/13.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "Node.h"
#include <stdlib.h>

//定义创建节点函数；
Node *creatNode(int data,Node *next){
    Node *node = malloc(sizeof(Node));
    node->data=data;
    node->next=next;
    return node;
}


//定义一个函数，传入数量i作为节点数量，创建一个单向链表；
Node *creatList(int i){
    
    Node *current = creatNode(0, NULL);
    Node *first = current;
    
    for (int j=1; j<i; j++) {
        current->next = creatNode(j, NULL);
        current = current->next;
    }
    
    return first;
}

//定义打印列表函数；
void printList(Node *first){
    for (; first!=NULL ; first=first->next) {
        printf("%d\n",first->data);
    }
}