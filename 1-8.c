#include <stdio.h>

int main (int argc, char *argv[])
{
  int spaceCnt =0;
  int tabCnt = 0;
  int nlCnt = 0;

  int c;

  while ((c = getchar()) != EOF) {
    if ( c == ' ') {
      spaceCnt++;
    }
    if (c == '\t') {
      tabCnt++;
    }
    if (c == '\n') {
      nlCnt++;
    }
  }

  printf("spaceCnt:%d,tabCnt:%d,nlCnt:%d\n",spaceCnt,tabCnt,nlCnt);

  
  return 0;
}
