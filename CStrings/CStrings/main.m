//
//  main.m
//  CStrings
//
//  Created by 陈培升 on 16/3/4.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {

//        char *str1="Hello";
//        char *str2="world";
//        char buf[100];
//        memset(buf,0,100);
//        
//        strcat(buf, str1);
//        strcat(buf, str2);
//        printf("%s\n",buf);
//        printf("The buf's length is %lu\n",strlen(buf));
//        
//        sprintf(buf,"%d",100);//将任何类型的值变成字符串，参数一传入目标字符串，参数二传入值
//        printf("%s\n",buf);
//        sprintf(buf,"%s%s%d\n",str1,str2,100);
//        printf("%s",buf);
        
        char *num="100";
        int intVar=atoi(num);
        printf("%d\n",intVar);
    
    }
    return 0;
}
