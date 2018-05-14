//
//  main.c
//  017指针的定义
//
//  Created by 凯凯 on 2017/10/1.
//  Copyright © 2017年 凯凯. All rights reserved.
//

#include <stdio.h>
/*
 内存：以1个字节为单位，而每个内存都有标号。而标号就是地址。也叫指针
 指针:就是地址
 指针变量:存放地址变量
 指针作用:有了指针就可以访问它指向的存储空间
 定义指针:指针所指向的数据类型 *(指针类型说明符) 指针变量名
 
 *作用:
     1.在定义指针变量的时候它是一个类型说明符说明定义的变量是指针变量
     2.如果不是在定义指针的时候它是一个操作符,在指针变量前面则是访问指针所指向的存储空间
 &作用:
     1.取地址符,取出变量的地址 当*作为操作符的时候,它与&是一个反操作符
     2.&取的是首地址。根据它的数据类型。可以得出它占多少字节。
 指针初始化
    1.定义变量时 *代表类型 它的类型int *
    2. 使用变量时 *代表指针所指向的内存
*/
void test1()
{
     printf("例子一\n");
    //例子一
    int a=10;
    printf("a的值是：%d\ta的内存地址是:%p\n",a,&a);//&取a的首内存地址
    //指针指向谁，就把谁的地址赋值给指针
    int *p=NULL;
    //int *p=&a;//定义并赋值的写法 *是指针类型 存储的是地址 所以用&取i的地址
    //p是一个变量p的类型是int *
    p=&a;
    //p=100;直接操作指针变量本身没有意义
    *p=100;
    //需要操作*p，操作指针指向的内存
    printf("*p的值是：%d\ta的值是：%d\n",*p,a);
    printf("p的值是：%p\ta的内存地址是：%p\n",p,&a);
}
void test2()
{
    //例子二
    printf("例子二\n");
    int a=20;
    int *p=&a;
    int *q=NULL;
    q=p;//因为指针变量存储的都是指针.而且同一类型可以直接赋值
    *q=200;
    printf("*q的值:%d\t*p的值:%d\ta的值:%d\n",*q,*p,a);
}
void test3( int len,char str[])
{
    printf("例子三\n");
    //int len=sizeof(str)/sizeof(char);
    for (size_t i =0;i<len; i++) {
        printf("%c",str[i]);
    }
    printf("\n");
    char *p=str;//字符串名,就是数组的首元素.也是首地址.所以不需要&运算符可以直接赋值.
    for (size_t i=0; i<len; i++) {
        if (str[i]!=0) {
            *p=str[i]-('a'-'A');//将字符串转换成全部大写
            p++;//指针变量自增是根据数据类型大小自增
        }
    }
    for (size_t i =0;i<len; i++) {
        printf("%c",str[i]);
    }
        printf("\n");
}

int main(int argc, const char * argv[]) {

    test1();
    test2();
    char str[]="apple";//定义字符串数组
    int  len=sizeof(str)/sizeof(char);
    test3(len,str);
    
    return 0;
}
