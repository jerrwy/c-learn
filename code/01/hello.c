#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("hello world\n");
  printf("BUFSIZ: %d\n", BUFSIZ);
  printf("EOF: %d\n", EOF);
  printf("FOPEN_MAX: %d\n", FOPEN_MAX);
  printf("FILENAME_MAX: %d\n", FILENAME_MAX);
  return 0;
}

// gcc为c语言编译器,可以将.c源文件编译成可执行文件

/**
 * c标准库<stdio.h>
 * 定义了三个变量类型、一些宏和各种函数来执行输入和输出。
 * */
