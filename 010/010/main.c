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
    "1 2 3 4 5 6 7 8 9 10",
    "One Two Three Four Five Six Seven Eight Nine Ten",
    };
    for (int i=0;i<sizeof(names)/sizeof(names[0]);i++)//二维数组总长度/一维数组总长度
    {
        printf("%s\n",names[i]);
    }
    
    return 0;
}
