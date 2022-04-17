#include <stdio.h>

#define SMALL_CASE_COUNT 26
#define NUM 10
#define UPPER_CASE_COUNT 26

int main(int argc, char *argv[]) {
  int totalSize = SMALL_CASE_COUNT + UPPER_CASE_COUNT + NUM;
  int charCount[totalSize];
  int c;

  for (int i = 0; i < totalSize; i++) {
    charCount[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if ((c >= 'a' && c <= 'z')) {
      charCount[c - 'a']++;
    }
    if (c >= 'A' && c <= 'Z') {
      charCount[c - 'A' + SMALL_CASE_COUNT]++;
    }
    if (c >= '0' && c <= '9') {
      charCount[c - '0' + SMALL_CASE_COUNT + UPPER_CASE_COUNT]++;
    }
  }

  for (int i = 0; i < SMALL_CASE_COUNT; i++) {
    if (charCount[i] > 0) {
      printf("%c:", 'a' + i);
      for (int n = 0; n < charCount[i]; n++) {
        printf(" * ");
      }
      printf("\n");
    }
  }

  for (int i = 0; i < UPPER_CASE_COUNT; i++) {
    if (charCount[i + SMALL_CASE_COUNT] > 0) {
      printf("%c:", 'A' + i);
      for (int n = 0; n < charCount[i + SMALL_CASE_COUNT]; n++) {
        printf(" * ");
      }
      printf("\n");
    }
  }

  for (int i = 0; i < NUM; i++) {
    if (charCount[i + SMALL_CASE_COUNT + UPPER_CASE_COUNT] > 0) {
      printf("%c:", '0' + i);
      for (int n = 0; n < charCount[i + SMALL_CASE_COUNT + UPPER_CASE_COUNT];
           n++) {
        printf(" * ");
      }
      printf("\n");
    }
  }

  return 0;
}
