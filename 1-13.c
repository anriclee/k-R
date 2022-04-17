#include <stdio.h>

#define MAX_WORD_LEN                                                           \
  45 // https://zh.wikipedia.org/zh-my/%E6%9C%80%E9%95%BF%E7%9A%84%E8%8B%B1%E6%96%87%E5%8D%95%E8%AF%8
#define IN 1
#define OUT 0

int main(int argc, char *argv[]) {
  int state = OUT;
  int wordLenCount[MAX_WORD_LEN];
  int c;
  int wdLen = 0;
  int appearedMaxLen = 0; // max word len appeared of the input

  for (int i = 0; i < MAX_WORD_LEN; i++) {
    wordLenCount[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
      if (wdLen > 0) {
        if (wdLen > appearedMaxLen) {
          appearedMaxLen = wdLen;
        }
        wordLenCount[wdLen]++;
        wdLen = 0;
      }
      continue;
    }
    if (state == OUT) {
      state = IN;
      wdLen = 0;
    }
    wdLen++;
  }
  // print hirizonly
  printf("========= HORIZONLLY PRINTED ========\n");
  printf("len, times\n");
  for (int i = 1; i <= appearedMaxLen; i++) {
    printf("%d", i);
    int times = wordLenCount[i];
    for (int j = 0; j < times; j++) {
      printf(" * ");
    }
    printf("\n");
  }

  // print vertically
  // copy original array

  printf("========= VERTICALLY PRINTED ========\n");
  int wordLenCountCopy[appearedMaxLen];
  int maxTimes = 0;
  for (int i = 0; i <= appearedMaxLen; i++) {
    wordLenCountCopy[i] = wordLenCount[i];
    if (wordLenCountCopy[i] > maxTimes) {
      maxTimes = wordLenCountCopy[i];
    }
  }
  for (int i = 1; i <= appearedMaxLen; i++) {
    printf("%3d", i);
  }
  printf("\n");
  // printf("maxTimes:%d\n",maxTimes);
  for (int i = 1; i <= maxTimes; i++) {
    for (int j = 1; j <= appearedMaxLen; j++) {
      // printf("wl %d count:%d\n",j,wordLenCountCopy[j]);
      if (wordLenCountCopy[j] > 0) {
        wordLenCountCopy[j]--;
        // printf("set index %d\n",j);
        printf("  *");
      } else {
        printf("   "); //  print space for holder
      }
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}
