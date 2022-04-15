#include <stdio.h>

int main (int argc, char *argv[])
{
  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
  }
  printf("EOF value:%d\n",EOF); // on MAC os, EOF value can be input by Ctrl+D
  return 0;
}
