//
//  main.m
//  LinkedList
//
//  Created by 陈培升 on 16/3/7.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef struct _Node{
    int data;
    struct _Node *next;
    struct _Node *pre;
} Node;



Node *creadNode(int data,Node *pre,Node *next){
    Node *node=malloc(sizeof(Node));
    node->data=data;
    if (next!=NULL) {
        next->pre=node;
    }
    node->next=next;
    if (pre!=NULL) {
        pre->next=node;
    }
    node->pre=pre;
    return node;
}



void printList(Node *node){
    for (;node!=NULL;node=node->next) {
        printf("The value is %d\n",node->data);
    }
}



void rePintList(Node *node){
    for (;node!=NULL;node=node->pre) {
        printf("The value is %d\n",node->data);
    }
}


void destroyList(Node *node){
    Node *tmp;
    while (node!=NULL) {
        tmp=node;
        node=node->next;
        free(tmp);
    }
}


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Node *first=creadNode(0,NULL,NULL);
        Node *end=first;
        
        end=creadNode(1,end,NULL);
        end=creadNode(2,end,NULL);
        first=creadNode(-1,NULL,first);
        
        printList(first);
        rePintList(end);
    }
    return 0;
}
