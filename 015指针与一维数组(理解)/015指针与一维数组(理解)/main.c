//
//  main.c
//  015指针与一维数组(理解)
//
//  Created by 凯凯 on 2017/9/30.
//  Copyright © 2017年 凯凯. All rights reserved.
//
//1.sizeof(array)!=sizeof(pointer):当一个数组赋值一个指针变量的时候,那么数组中有些信息就丢失了,比如数组长度,这种现象指针信息遗失
//2.指针的指向是可以改变的,数组的指向不可以改变 p=sum+1;
//3.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum[]={1,2,3,4,5,6};
    int *p=sum;
    printf("数组元素【1】：%d \n",sum[1]);
    printf("指针变量【1】：%d \n",p[1]);
    printf("sum[1]本质*(sum+1)：%d \n",*(sum+1));
    printf("指针数值【1】：%d \n",*(p+1));
    printf("%d \n",*(++p));
    printf("%d \n",1[sum]);
    printf("数组:%lu 指针%lu\n",sizeof(sum),sizeof(p));
    p=sum[0];//指针的指向是可以改变的,数组的指向不可以改变
    printf("改变指针指向后的值:%d\n",p);
    printf("%p\n",sum);
    printf("%p\n",&sum);
    printf("%p\n",p);
    printf("%p\n",&p);
    return 0;
}
