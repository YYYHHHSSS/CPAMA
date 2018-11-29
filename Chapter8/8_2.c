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


  while (n > 0) {                   // 记录数值出现的次数。
    digit = n % 10;                 // 次数为0的未出现，次数为1的出现一次，次数大于1的重复出现。
    a[digit]++;
    n /= 10;
  }

  printf("Repeated digit(s): ");
  for (int i =0; i < 10; i++)
      if (a[i] > 1)
          printf("%2d", i);

  printf("\nDigit:       ");   
  for (int i = 0; i < 10; i++)
      printf("%3d", i);
  printf("\nOccurrences: ");
  for (int i = 0; i < 10; i++)
      if (a[i] != 10)
          printf("%3d", a[i]);
  printf("\n");

  return 0;
}


