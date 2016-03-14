//
//  Node.c
//  rePrintList
//
//  Created by 陈培升 on 16/3/14.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "Node.h"
#include "Array.h"
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

//定义一个函数实现单向链表逆序；
Node *creatReList(Array *arr){
    Node *list = creatNode(arr->values_[arr->length_-1], NULL);//链表第一个值应该是数组的最后一个元素，需-1;
    Node *reList = list;
    for (int i=arr->length_-2; i>=0; i--) {
        //循环开始的链表的值应该是此链表的第二个值，所以应该从倒数第二个值开始循环，知道数组下标为0;
            list->next=creatNode(arr->values_[i], NULL);
            list=list->next;
    }
    return reList;
}

//定义打印列表函数；
void printList(Node *first){
    for (; first!=NULL ; first=first->next) {
        printf("%d\n",first->data);
    }
}