/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* square.c (Chapter 6, page 102) */
/* Prints a table of squares using a while statement */

#include <stdio.h>

int main(void)
{
  short i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%hd", &n);
  getchar();    // 用以接受输入至scanf函数中的'\n',否则在下述循环中getchar()直接接受‘\n',导致i第一次等于'24'时，直接跳过输入Enter。

  for (i = 1; i <= n; i++) {
    printf("%10hd%10hd\n", i, i * i);
    if (i % 24 == 0)
    {
        printf("Press Enter to continue .....");
        getchar();   // 在这里，getchar()函数未输入参数，则程序不往下执行。从而达到控制程序的目的。
    }
  }

  return 0;
}

