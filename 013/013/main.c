//
//  main.c
//  013
//  指针
//  Created by 凯凯 on 2017/9/14.
//  Copyright © 2017年 凯凯. All rights reserved.
//

#include <stdio.h>
/*
 OC里所有的对象都是指针
 指针:内存地址
    内存中最小的存储字节,每一个字节在内存中都有编号,这个编号就是指针
 指针的作用:
    有了指针就能访问这一块的存储空间操作存储空间中的内容
 指针变量:
    存放内存地址的变量
 定义指针变量:
    指针所指向的数据类型 *指针变量名;
 在定义指针变量时*是一个类型说明符,说明它定义的变量是一个指针变量
 int 说明指针只能指向int类型的变量
 指针变量占用内存空间
    int num=10;
    int *p=&num;
 声明为指针以后，“语句”里，出现 *p， 表示是 数值，出现 p，表示是地址。
 
 注意:
    只有定义没有初始化的指针里面存储的是垃圾值,这就使所谓的野指针,野指针很危险. 
 
 */
int main(int argc, const char * argv[]) {
    int num=10;
    int *p=&num;
    *p=20;
    printf("变量sum内存地址是:%p\n",&num);//指针格式打印变量
    printf("指针变量p的内存地址是:%p\n",&p);
    printf("指针变量p存储的数值是:%x\n",p);
    printf("指针*p存储的值是:%d\n",*p);
    printf("变量sum存储的值是:%d\n",num);
    return 0;
}
