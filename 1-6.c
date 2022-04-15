#include <stdio.h>

int main (int argc, char *argv[])
{
  int c;
  int res = ((c = getchar()) != EOF);
  printf("res value:%d\n",res);
  return 0;
}
