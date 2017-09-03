//
//  main.c
//  005
//
//  Created by 凯凯 on 2017/8/27.
//  Copyright © 2017年 凯凯. All rights reserved.
//

#include <stdio.h>
void testif()
{
    /*
     || 逻辑 或
     && 逻辑 与
     if(条件表达式)
     语句;
     */
    float age =0;
    printf("请输出你的年龄:");
    scanf("%f",&age);
    if (age>=0 && age<=200)
    {
        if(age>=18)
        {
            printf("成年人\n");
        }
        else
        {
            printf("未成年!\n");
        }

    }
    else
    {
        printf("超出设定值!");
    }
    
}
void testswitch()

{
    float num1=0,num2=0,num3=0,max=0;
    for (int i=1; i<=3; i++)
    {
        
        printf("请输入第%d个数:",i);
        switch (i) {
            case 1:
                scanf("%f",&num1);
                continue;
            case 2:
                scanf("%f",&num2);
                continue;
            case 3:
                scanf("%f",&num3);
                break;

    }
        max=num1;
    if (num2>max)
    {
        max=num2;
    }
    if (num3>max)
    {
        max=num3;
    }
        printf("最大值%3.f\n",max);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    testswitch();
    return 0;
}
