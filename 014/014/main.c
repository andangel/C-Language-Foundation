//
//  main.c
//  014
//
//  Created by 凯凯 on 2017/9/21.
//  Copyright © 2017年 凯凯. All rights reserved.
//
void mySwap1(int *num1,int *num2)
{
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
int test1(int num1,int num2,*num3)
{
    *num3=num1* num2;
    
    return num1+num2;
}
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=10;
    int b=20;
    printf("a=%d,b=%d\n",a,b);
    mySwap1(&a, &b);
    printf("a=%d,b=%d\n",a,b);
    int c=0;
    test1(a, b, &c);
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    return 0;
}
