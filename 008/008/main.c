//
//  main.c
//  008
//
//  Created by 凯凯 on 2017/9/4.
//  Copyright © 2017年 凯凯. All rights reserved.
//

#include <stdio.h>
#include <string.h>
/*
 要使用字符串函数要先包含string.h库文件
 
*/
void _strlen()
{
    printf("---计算字符串长度---\n");
    //unsigned long strlen(const char *__s)
    //无符号:unsigned
    //无符号32位整数:unsigned long
    //函数名:strlen
    //不可变指针:const char *__s
    //整个函数意思:传入字符数组返回无符号整数,计算字符数组长度.(不包含\0)所以用来计算字符串长度
    char name[]="huangchengkai";
    //int len=(int)strlen(name);//强转int类型省的警告看的心烦
    size_t len=strlen(name);
    printf("name符串长度:%zu\n",len);
    
    
}
void _strcpy()
{
    printf("---字符串拷贝会数组越界---\n");
    //char * strcpy(char *__dst, const char *__src)
    //strcpy 覆盖,复制字符串.
    //注意如果目标长度大于原长度会造成数组越界程序崩溃

    char name[20];
    char huang[]="huang";
    printf("name拷贝前:%s\n",name);
    strcpy(name, huang);
    printf("name拷贝后:%s\n:",name);
}
void _strncpy()
{
    printf("---限制拷贝长度字符串拷贝字符串防止字符数组越界---\n");
    //strncpy(char *__dst, const char *__src, size_t __n)解决字符数组越界size_t __n要拷贝多少字符
    char name[11];//这里有10个为什么打印了9个字符?因为字符串后面有个\0
    char huang[]="huangchengkai";
    printf("name拷贝前:%s\n",name);
    strncpy(name, huang,sizeof(name)-1);//要拷贝字符串长度,不包括\0,这里长度要-1否则会越界或乱码
    printf("name拷贝后:%s\n",name);
}
void _strcat()
{
    printf("---拼接字符串会数组越界---\n");
    //扫描到目标字符串/0开始拼接扫描到原字符串\0结束拼接
    //char * strcat(char *__s1, const char *__s2)
    char hello[100]="Hello!";//拼接目标长度小于原长度会数组越界
    char name[]="Huang Cheng Kai";
    strcat(hello, name);
    printf("拼接字符串后:%s\n",hello);
}
void _strncat()
{
    printf("---限制拼接长度字符串拷贝字符串防止字符数组越界---\n");
    char hello[10]="hello!";
    char huang[]="huang";
    size_t length=sizeof(hello)-strlen(hello)-1;
    printf("length=数组长度-字符长度:(%lu-%lu)-1=%lu\n",sizeof(hello),strlen(hello),sizeof(hello)-strlen(hello));
    strncat(hello, huang, length);
    printf("%s\n",hello);
}
void _strcmp()
{
    printf("---字符串比较---\n");
    //从第一个字符开始比较,如果都相等就返回0,如果遇到不相等字符就返回这两个字符ASCII值的差
    char name1[]="huangchengkai";
    char name2[]="huangchong";
    
    printf("%d",strcmp(name1, name2));
    
    
}
int main(int argc, const char * argv[]) {
    _strlen();
    _strcpy();
    _strncpy();
    _strcat();
    _strncat();
    _strcmp();
    return 0;
}
