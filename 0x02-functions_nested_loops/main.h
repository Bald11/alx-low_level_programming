#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#define myprint() printf("_putchar\n")

void print_alphabet(void)
{
  char c;
  for (c = 'a'; c <= 'z'; c++)
  {
    putchar(c);
  }
  putchar('\n');
}

#endif
