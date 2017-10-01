//
//  main.c
//  016指针与二维数组(理解)
//
//  Created by 凯凯 on 2017/9/30.
//  Copyright © 2017年 凯凯. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum[3][2]={{1,2},{3,4},{5,6}};//定义二维数组
    int *p=sum[0];
    for (int i=0; i<6; i++) {
        printf("%d\t ",*(p+i ));
    }
    printf("\n");
    int *pp[3]={sum[0],sum[1],sum[2]};//定义一个指针数组,并赋值
    printf("%d\n",pp[1][0]);
    printf("%d\n",pp[2][1]);
    return 0;
}
