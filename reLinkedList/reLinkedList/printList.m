//
//  printList.m
//  reLinkedList
//
//  Created by 陈培升 on 16/3/7.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "struct.h"

void printList(node *node){
    for (; node!=NULL; node->next=node) {
        printf("The value%d\n",node->data);
    }
}

void rePrintList(node *linkNode){
    
    for (;linkNode!=NULL;linkNode->next=linkNode) {
        
    }
}