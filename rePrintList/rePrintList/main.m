//
//  main.m
//  rePrintList
//
//  Created by 陈培升 on 16/3/28.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "node.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Node *i = creatList(0, 100);
        printList(i);
    }
    return 0;
}
