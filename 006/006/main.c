//
//  main.c
//  006
//
//  Created by 凯凯 on 2017/8/28.
//  Copyright © 2017年 凯凯. All rights reserved.
//

#include <stdio.h>

void SetAge()
{
    float value=0;
    printf("请输入你的年龄:");
    scanf("%f",&value);
    printf("年龄:%.0f\n",value);
}
void SetName();
int main(int argc, const char * argv[]) {
    // insert code here...
    SetName();
    SetAge();
    return 0;
}
void SetName()
{
    char name[20];
    printf("请输入你的名字:");
    scanf("%s",name);
    printf("名字:%s\n",name);
}
