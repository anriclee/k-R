#include <stdio.h>

int main (int argc, char *argv[])
{
  int c;
  int prevC = -1;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    }
    else if (c == '\b') {
      putchar('\\');
      putchar('b');
    }
    else if (c == '\\') {
      putchar('\\');
      putchar('\\');
    }else {
      putchar(c);
    }
  }
  return 0;
}
