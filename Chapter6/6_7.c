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
  int i, z, a, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) 
  {
      z = 0;
      for (a = 1; a <= i; a++)
          z += i;
      printf("%10d\n", z);
  }

  return 0;
}
