#include <stdio.h>

int main (int argc, char *argv[])
{
  int c;
  int prevC = -1;
  while ((c = getchar()) != EOF) {
    if (c != ' ' || (c == ' ' && prevC != ' ')) {
      putchar(c);
    }
    prevC = c;
  }
  return 0;
}
