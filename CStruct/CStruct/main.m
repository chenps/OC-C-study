//
//  main.m
//  CStruct
//
//  Created by 陈培升 on 16/3/4.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>

//typedef struct _Student{//实际开发中为了区分结构体名字和结构体类型名字，可以在结构体名字前面或者后面加个下划线来区分
//    int age;
//    char *name;
//}Student;

//typedef struct{//甚至如果不写结构体名字，只写结构体类型也是可以的
//    int age;
//    char *name;
//}Student;
//
//union Data {
//    char ch;
//    int8_t value;
//};

struct ColorS{
    uint8_t blue,green,red,alpha;
};

union ColorU{
    int32_t color;
    struct ColorS colors;
};

int main(int argc, const char * argv[]) {
    @autoreleasepool {
//        struct Student s = {27,"chenps"};
//        struct Student s; 有写结构体名字的话，需要加struct关键字，如果没有给命名结构体名字，可以直接当作类型定义
//        Student s;
//        s.age=27;
//        s.name="chenps";
//        printf("%s\n%d\n",s.name,s.age);
//        union Data data={'C'};
//        printf("%d\n",data.value);
        int32_t color = 0xFFFF0000;//[00,00,FF,FF]
        union ColorU theColor;
        theColor.color=color;
        printf("%x\n",theColor.colors.alpha);
    
    }
    return 0;
}
