//
//  main.m
//  rePrintList
//
//  Created by 陈培升 on 16/3/14.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Node.h"
#import "Array.h"
        int main(int argc, const char * argv[]) {
            @autoreleasepool {
                
                Node *list = creatList(20);//创建一个随意指定节点数量的单向链表，每个节点存储一个整形数值，从0开始每个递加1;
                
                printList(list);//按顺序打印单向链表;
                
                for (int i=0; i<50; i++) {
                    printf("*");
                }
                printf("\n");   //用*符号打印一条分割线;
                
                Array *arr = creatArr();//创建一个动态数组;
                
                
                //使用一个for循环将单向链表的值依次存入动态数组;
                for ( ; list!=NULL; list=list->next) {
                    arrAdd(arr, list->data);
                }
                
                Node *reList = creatReList(arr);//使用函数将单向链表进行逆序并复制给relist链表;
                
                printList(reList);//打印已逆序链表；
            
            }
            return 0;
        }
