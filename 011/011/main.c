//
//  main.c
//  011 数组与函数
//
//  Created by 凯凯 on 2017/9/5.
//  Copyright © 2017年 凯凯. All rights reserved.
//

#include <stdio.h>
void ChangeArray(int array[],int count)
{
    
    printf("%p\n",&array[0]);
    for (int i=0; i<count; i++) {
        array[i]+=10;
    }

    
}
void ChangeInt(int i)
{
    i=i+1;
    printf("函数内变量i的值:%d地址是:%p\n",i,&i);
}
int main(int argc, const char * argv[]) {
    int i=10;
    ChangeInt(i);
    printf("函数外变量i的值:%d地址是:%p\n",i,&i);
    printf("这说明传递值类型参数,两个数值在不同的内存地址,值也没有发生改变.传递的是数值\n");
    
    int array[]={1,2,3,4,5};
    int count=sizeof(array)/sizeof(int);
    printf("%p\n",&array[0]);
    ChangeArray(array,count);
    for (i=0; i<count; i++) {
        printf("函数外数组的值:%d数组地址:%p",array[i],&array[i]);
    }
    printf("\n");
    printf("这说明传递引用类型参数,两个数值在相同的内存地址,值发生改变.传递的是引用(指针)\n");
    return 0;
}
