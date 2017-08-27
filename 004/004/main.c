//
//  main.c
//  004
//
//  Created by 凯凯 on 2017/8/26.
//  Copyright © 2017年 凯凯. All rights reserved.
//
/*
 short、int、long、char、float、double 这六个关键字代表C 语言里的六种基本数据类型.
 
 单目运算符:操作数只有一个
 双目运算符:操作数有两个
 三木运算符:操作数有三个
 算术运算:
 + 正号
 - 负号

 + 加
 - 减
 * 乘
 / 除
 
 % 取模 取余
 
 
 */

#include <stdio.h>
int test() {
    
    printf("请输出一个整数:");
    int sum=0;
    scanf("%d",&sum);
    for (int i=1;i<=10;i++)
    {
        printf("%d%%%d余数=%d\n",sum,i,sum%i);
    }
    return 0;
}
int test1()
{
    //数据类型转换
    int i=10;
    if(sizeof(int)==sizeof(i))
    {
        printf("变量i是int类型,值:%d\n",i);
    }
    
    double d= (double)i+3.14159;
    
    if(sizeof(double)==sizeof(d))
    {
        
        printf("变量d是double类型,值:%lf\n",d);

    }
    return 0;
}

void test3()
{
    //测试数据类型的长度
    printf("short int=%lu\n",sizeof(short int));
    printf("int=%lu\n",sizeof(int));
    printf("long int=%lu\n",sizeof(long int));
    printf("char=%lu\n",sizeof(char));
    printf("float=%lu\n",sizeof(float));
    printf("double=%lu\n",sizeof(double));
}

int main(int argc, const char * argv[]) {
    test3();
    return 0;
}
