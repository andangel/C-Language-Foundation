//
//  main.c
//  009
//
//  Created by 凯凯 on 2017/9/4.
//  Copyright © 2017年 凯凯. All rights reserved.
//


#include <stdio.h>
#include "Header.h"


int main(int argc, const char * argv[]) {
    
    char str[]="HuangChengKai";
    indexOfCharinString(str, 'a');

    return 0;
}
/*
 检查字符串是否包含某个字符,如果包含返回索引,如果不包含返回-1
 */
void indexOfCharinString(char str[],char Char)
{
    int index=0;
    int number=0;
    while (str[index]!='\0') {
        if (str[index] == Char){
            number++;
            printf("找到第%d个字符索引:%d\n",number,index);
            
        }
        index++;
    }

}
