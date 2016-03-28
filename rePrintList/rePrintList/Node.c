//
//  node.c
//  rePrintList
//
//  Created by 陈培升 on 16/3/28.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#include "node.h"
Node *creatNode(int data,Node *next){
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = next;
    return node;
}

Node *creatList(int firstData,int endData){
    Node *current = creatNode(firstData, NULL);
    Node *first = current;
    for (int i=firstData; i<endData; i++) {
        current->next = creatNode(i+1, NULL);
        current = current->next;
    }
    return first;
}

void printList(Node *first){
    for (; first!=NULL; first=first->next) {
        printf("%d\n",first->data);
    }
}

void rePrintList(Node *first){
    
}