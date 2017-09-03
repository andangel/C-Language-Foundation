//
//  main.c
//  007
//
//  Created by 凯凯 on 2017/9/3.
//  Copyright © 2017年 凯凯. All rights reserved.
//

#include <stdio.h>
#include<string.h>
//string.h可以用strlen()函数获得字符数组的长度
void PrintfString(char str[]);
int main(int argc, const char * argv[]) {
    //利用函数模拟%s输出一个字符数组
    char name[5]={'c','g','x'};
    PrintfString(name);
    //利用函数模拟%s输出一个字符串
    char hello[]="Hello";
    PrintfString(hello);
    return 0;
}
//模拟%s功能输出一个字符数组
void PrintfString(char str[])
{
    //控制循环变量
    int i=0;
    while (str[i]!='\0') {
        printf("%c",str[i++]);
        //printf("%c",str[i]);
        //i++;
    }
    printf("\n");
}
