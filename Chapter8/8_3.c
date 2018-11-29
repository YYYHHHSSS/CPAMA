/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* repdigit.c (Chapter 8, page 166) */
/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
  int digit, a[10] = {0};
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);


  while (n > 0) 
  {           
      while (n > 0)
      {
        digit = n % 10;
        a[digit]++;
        n /= 10;
      }
      for (int i = 0; i < 10; i++)
          if (a[i] > 1)
              printf("%2d", i);
      for (int i = 0; i < 10; i++)
          a[i] = 0;                // 将a[10]清零 再进行赋值操作
      printf("\nEnter a number: ");
      scanf("%ld", &n);
  }

  return 0;
}



