//
//  creadNode.m
//  reLinkedList
//
//  Created by 陈培升 on 16/3/7.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "struct.h"
node *creadNode(int data,node *next){
    node *node=malloc(sizeof(node));
    node->data=data;
    node->next=next;
    return node;
}