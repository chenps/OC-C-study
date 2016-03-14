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
                
                Node *list = creatList(100);
                
                printList(list);
                
                
                Array *arr = creatArr();
                
                
                
                for (; list!=NULL; list=list->next) {
                    arrAdd(arr, list->data);
                }
                
                
                
                for (int j=arr->length_-1;j>=0;j--) {
                    
                    printf("%d\n",arr->values_[j]);
                    
                }
                
            }
            return 0;
        }
