//
//  main.c
//  010
//
//  Created by 凯凯 on 2017/9/4.
//  Copyright © 2017年 凯凯. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char names[][100]={
    "壹 贰 叁 肆 伍 陆 柒 捌 玖 拾",
    "项目2",
    "项目3",
    "项目4",
    "项目5",
    "项目6",
    "项目7",
    "项目8",
    "项目9",
    "项目10",
    };
    for (int i=0;i<sizeof(names)/sizeof(names[0]);i++)//二维数组总长度/一维数组总长度
    {
        printf("%s\n",names[i]);
    }
    
    return 0;
}
