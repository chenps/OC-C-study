//
//  main.m
//  loop
//
//  Created by 陈培升 on 16/3/4.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
//        // insert code here...
////        NSLog(@"Hello, World!");
//        
//        for (int i=0; i<100; i++) {
//            printf("%d\n",i);
//            
//            if (i==50) {
////                break;
//                continue;
//            }
//        }
//        int i=0;
//        while (i<100) {//如果条件传入一个成立的布尔值的话，例如YES，那么就能建立一个死循环
//            printf("%d\n",i);
//            i++;
//            
//            if (i==50) {
//                break;
//            }
//        }

        int i = 0;
        do{
            printf("%d\n",i);
            i++;
        }while (i<100);
    //while循环是先判断后执行，do-while是先执行后判断
    }
    return 0;
}
