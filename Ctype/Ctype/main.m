//
//  main.m
//  Ctype
//
//  Created by 陈培升 on 16/3/4.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        printf("hello world\n");
        int a=10;
        int32_t b=10;
        int64_t c=10;
        printf("%ld,%ld,%ld,%lld\n",sizeof(a),sizeof(b),sizeof(c),INT64_MAX);
        
        float d=10.0;
        Float32 e=10.0;
        Float64 f=10.0;
        double g=10.0;
        printf("%lu,%lu,%lu,%lu\n",sizeof(d),sizeof(e),sizeof(f),sizeof(g));
        
        char ch='b';
        int ch2=ch-32;
        printf("%d,%c\n",ch2,ch2);
        
        char *str="hello world";
        printf("%s\n",str);
        
        int intArr[]={0,1,2,3,4};
        char chArr[6];
        chArr[0]='h';
        chArr[1]='e';
        chArr[2]='l';
        chArr[3]='l';
        chArr[4]='o';
        chArr[5]=0;
        
        char ch2Arr[6];
        memset(ch2Arr, 0, 6);//手动清理字符数组内存
        printf("%d,%s,%s\n",intArr[0],chArr,ch2Arr);
        
        
    }
    return 0;
}
