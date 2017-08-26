//
//  main.c
//  002
//
//  Created by 凯凯 on 2017/8/25.
//  Copyright © 2017年 凯凯. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("int整型:%lu\n",sizeof(int));
    int max=INT_MAX;int min=INT_MIN;
    int a,b;a=1;b=2;
    printf("在%%与d之间加入0n,n表示数值的宽度,如果宽度不够用0左边补齐:%02d%02d\n",a,b);
    printf("在%%与d之间加入n,n表示数值的宽度,如果宽度不够用空格左边补齐:%02d%6d\n",a,b);
    printf("在%%与d之间加入-n,n表示数值的宽度,如果宽度不够用空格右边补齐:%-4d%02d\n",a,b);
    printf("int整型最大:%d最小:%d\n",max,min);
    float f1=123.45678f;
    printf("float单精度浮点型%lu\n",sizeof(float));
    printf("f1=%g\n",f1);
    printf("f1保留4位小数超出6位不精确=%.4f\n",f1);
    printf("float 类型，整数+小数部分（按位数算），超出6个不再精确，后面的数字可能是随机\n");
    printf("double双精度浮点型%lu\n",sizeof(double));
    double d1=3.141592653589793238462643383279;//31位
    printf("d1=%lf\n",d1);
    printf("double 类型,整数+小数（按位数算），超出15位不再精确,后面的数值可能是随机\n");
    printf("d1保留10位小数,超出15位不精确=%.16lf\n",d1);
    printf("char字符型%lu\n",sizeof(char));
    return 0;
}
