//
//  main.c
//  003
//
//  Created by 凯凯 on 2017/8/26.
//  Copyright © 2017年 凯凯. All rights reserved.
//  scanf原理
//  1.scanf如果发现输入缓冲区中没有内容,就会启动录入
//  2.scanf发现输入缓冲区中有\n(回车)就会去输入缓冲区中取值
//  3.如果是自己的只就取走
//  4.如果不是则丢掉,输入缓冲区中值依然存在
//  键盘->输入缓冲区->变量
//

#include <stdio.h>

int test1()
{
    int sum=0;
    printf("请输入一个整数:");
    
    scanf("%i",&sum);//%i 字符说明符%i 读入可选有符号整数。
    //a,e,f,g,A,E,F,G 读入可选有符号浮点数
    //%s 读入字符串
    //p 读入一个指针值。
    //o 读入可选有符号八进制整数。
    //x,X读入可选有符号十六进制整数。
    //对于字符串数组或字符串指针变量，由于数组名可以转换为数组和指针变量名本身就是地址，因此使用scanf()函数时，不需要在它们前面加上"&"操作符。
    printf("%d\n",sum);
    return 0;
}
int test2(void)
{
    int a,b,c;
    printf("用空格分别给abc赋值(或输入数值回车):\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    return 0;
}
int test3(void)

{
 //无法正确获取空格后的数值:I Love You 只显示了I
 //结论是：残留的信息 love you是存在于stdin流中，而不是在键盘缓冲区中。scanf()函数还有一个 %[] 格式控制符（test4 修正了此问题)
    char str[80];
    
    scanf("%s",str);
    
    printf("%s",str);
    
    return 0;
}
int test4(void)
{
    //能接受字符串中的空格符
    char str[50];
    scanf("%[^\n]",str);/*scanf("%s",string);不能接收空格符*/
    printf("%s\n",str);
    return 0;
}
//scanf很容易出错,跳过以后用cin输入
int main(int argc, const char * argv[]) {
    test4();
    return 0;
}
