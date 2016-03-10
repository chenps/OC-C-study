//
//  creatList.h
//  reLinkedList
//
//  Created by 陈培升 on 16/3/9.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#ifndef creatList_h
#define creatList_h

#include <stdio.h>


//typedef void* Anypointer;

typedef struct Node_{
    int data;
    struct Node_ *next;
    struct Node_ *pre;
}Node;

Node *CreatNode(int data,Node *pre,Node *next);

#endif /* creatList_h */
