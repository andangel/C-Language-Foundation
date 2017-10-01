//
//  main.c
//  012
//  数组
//  Created by 凯凯 on 2017/9/14.
//  Copyright © 2017年 凯凯. All rights reserved.
//

/*
 一维数组:用来连续存放相同数据类型的集合
 定义:数组类型 数组名称[元素个数]
 一维数组:行(由连贯的相同数据类型的元素组成)
 注意:
 数组名称就是一个地址
 数组初始化以后内存数组长度不可变
 数组的元素下标从0开始
 一维数组定义要声明多少元素个数才能分配内存空间
    错误的:int sum[];
    正确的:int sum[3];
 
 一维数组初始化
 1.先定义再初始化
    int sum[3];
    int sum[0]=1;sum[1]=2;sum[2]=3;
2.定义的同时初始化
    指定元素个数再初始化
    int sum[2]={1,2};
    不指定元素个数再初始化
    int sum[]={1,2};
    指定元素个数,为元素个别初始化
    int sum[5]={[2]=3,[3]=4};
 
数组与函数
 数组元素作为函数参数传递是值传递
 数组作为函数参数传递是地址传递
 数组作为函数形参会被自动转换为指针变量
*/

/*
 二维数组:元素为一维数组的数组
 
 定义:数据类型 数组名称[一维数组个数][一维数组元素个数]
 二维数组:平面(由行和列组成)
            行:一维数组元素个数
            列:一维数组个数
 注意:

 二维数组一定要声明多少个一维数组元素个数才能分配内存空间
 错误的:    int sum[][]={{1,2},{3,4},{5,6}};
 正确的:    int sum[][2]={{1,2},{3,4},{5,6}};
 
 二维数组初始化:
 1.先定义再初始化
    int sum[2][2];
    num[0][0]=1;
    num[0][1]=2;
    num[1][0]=3;
    num[1][1]=4;
 2.定义的同时初始化
    int sum[2][2]={{1,2,},{3,4}};
    int sum[][2]={{1,2},{3,4}};
*/

/*
 C、C++中没有提供 直接获取数组长度的函数，对于存放字符串的字符数组提供了一个strlen函数获取长度，那么对于其他类型的数组如何获取他们的长度呢？
 其中一种方法是使 用sizeof(array) / sizeof(array[0]), 在
 C语言中习惯上在 使用时都把它定义成一个宏，比如#define GET_ARRAY_LEN(array,len) {len = (sizeof(array) / sizeof(array[0]));} 。
 */
#include<stdio.h>
#include"Header.h"
#define GET_ARRAY_LEN(array,length){length = (sizeof(array) / sizeof(array[0]));}
void ChangeElement(int arrayElement)
{
    arrayElement=1;//数组元素作为函数参数传递是值传递
    printf("函数内数组元素的值是:%d\n",arrayElement);
}
void ChangeArray(int array[],int length)
{
    printf("修改数组元素内的值:");
    for (int i=0; i<length; i++) {
        array[i]=i;
    }
    OutputArray(array, length);
}
void OutputArray(int array[],int length)
{
    printf("输出一维数组元素值:");
    for (int i=0;i<length;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
}


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int length=0;//数组元素个数
    int sum[5]={[0]=1,[4]=5};//
    GET_ARRAY_LEN(sum, length)
    ChangeElement(sum[1]);
    OutputArray(sum, length);
    ChangeArray(sum, length);
    char str[]="C语言不支持方法重载";
    printf("%s\n",str);
    

    
    return 0;
}
