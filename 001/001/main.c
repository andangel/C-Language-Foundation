//
//  main.c
//  001
//
//  Created by 凯凯 on 2017/8/25.
//  Copyright © 2017年 凯凯. All rights reserved.
//

//stdio.h标准输入输出库
#include <stdio.h>
//main()函数作为C语言程序入口函数
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");//printf函数来自stdio.h标准库文件
    return 0;
}
/*
 编译过程分解为如下4个大的步骤：
 预处理(Preprocessing)
    将所有的#define删除，并且展开所有的宏定义
    处理所有的条件预编译指令，比如#if #ifdef #elif #else #endif等
    处理#include 预编译指令，将被包含的文件插入到该预编译指令的位置。
    删除所有注释
    添加行号和文件标识，以便编译时产生调试用的行号及编译错误警告行号。
    保留所有的#pragma编译器指令，因为编译器需要使用它们
 编译(Compilation) 将源代码翻译成二进制,生成一个.o目标文件
    编译过程就是把预处理完的文件进行一系列的词法分析，语法分析，语义分析及优化后生成相应的汇编代码。
    gcc -S hello.i -o hello.s
 汇编(Assembly)
    汇编器是将汇编代码转变成机器可以执行的命令，每一个汇编语句几乎都对应一条机器指令。汇编相对于编译过程比较简单，根据汇编指令和机器指令的对照表一一翻译即可。
    gcc –c hello.c –o hello.o
 链接(Linking) 将目标文件与C语言的库文件整合生产可执行文件.out
    通过调用链接器ld来链接程序运行需要的一大堆目标文件，以及所依赖的其它库文件，最后生成可执行文件。
    d -static crt1.o crti.o crtbeginT.o hello.o -start-group -lgcc -lgcc_eh -lc-end-group crtend.o crtn.o (省略了文件的路径名)。
*/
