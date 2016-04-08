//
//  node.c
//  rePrintList
//
//  Created by 陈培升 on 16/3/28.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "node.h"
Node *creatNode(int data,Node *next){//创建链表节点
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = next;
    return node;
}

Node *creatList(int firstData,int endData){//按照输入的头节点数值开始创建储存头节点＋enddata的单向链表
    Node *current = creatNode(firstData, NULL);
    Node *first = current;
    for (int i=firstData; i<endData; i++) {
        current->next = creatNode(i+1, NULL);
        current = current->next;
    }
    return first;
}

void printList(Node *first){//正序打印单向链表
    for (; first!=NULL; first=first->next) {
        printf("%d\n",first->data);
    }
}

void rePrintList(Node *first){
    if(first->next == NULL || first->next->next == NULL)
    {
        printf("%d\n",first->data);   /*链表为空或只有一个元素则直接返回*/
    }
    
    Node *t = NULL;
    Node *p = first->next;
    Node *q = first->next->next;
    while(q != NULL)//逆序单向链表
    {
        t = q->next;
        q->next = p;
        p = q;
        q = t;
    }
    
    /*此时q指向原始链表最后一个元素，也是逆转后的链表的表头元素*/
    first->next->next = NULL;  /*设置链表尾*/
    first->next = p;           /*调整链表头*/
    printList(p);
}