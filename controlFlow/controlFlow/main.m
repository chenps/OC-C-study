//
//  main.m
//  controlFlow
//
//  Created by 陈培升 on 16/3/4.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        //        NSLog(@"Hello, World!");
        int score=82;
        //        if (score>=90) {
        //            printf("优秀\n");
        //        }else if(score>=70){
        //            printf("良好\n");
        //        }else if (score>=60){
        //            printf("合格\n");
        //        }else{
        //            printf("错误\n");
        //        }
        switch (score/10) {
            case 10:
                printf("满分\n");
                break;
                
            case 9:
                printf("优秀\n");
                break;
                
            case 8:
            case 7:
                printf("良好\n");
                break;
                
            case 6:
                printf("及格\n");
                break;
                
            default:
                printf("错误\n");
                break;
        }
        
        
    }
    return 0;
}
