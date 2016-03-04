//
//  main.m
//  Pointer
//
//  Created by 陈培升 on 16/3/4.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>

struct Student{
    int age;
    char *name;
};

int max(int a,int b){
    return a>b?a:b;
}

typedef int(*myFunctions)(int,int);

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
//        char *str="Hello World";
//        
//        printf("%c\n",*str);
//        printf("%c\n",str[0]);
//        printf("%c\n",*(str+1));
//        printf("%lld\n",(int64_t)str);
//        
//        int64_t strPointer=(int64_t)str;
//        printf("%s\n",(char *)strPointer);
        
//        struct Student student={18,"chenps"};
//        struct Student *student1=&student;
//        student1->age=20;

//        struct Student *student = malloc(sizeof(struct Student));
//        student->age=20;
//        student->name="chenps";
//        
//        printf("student{name:%s,age:%d}\n",student->name,student->age);
//        
//        free(student);
        
        int (*p)(int,int);
        p=&max;
        myFunctions p1;
        p1=&max;
        printf("%d\n",(*p1)(29,18));
        printf("%d\n",p1(29,18));
  
    }
    return 0;
}
