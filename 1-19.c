#include <stdio.h>

#define MAX_LEN 100

void reverse_input(char line[], int length);

int main(int argc, char *argv[]) {
  char line[MAX_LEN];
  int c;
  int i = 0;
  while (i < MAX_LEN && (c = getchar()) != EOF && c != '\n') {
    line[i] = c;
    i++;
  }
  if (c == '\n') {
   line[i] = c; 
    i++;
  }
  line[i] = '\0';
  reverse_input(line,i);
  printf("after reversed:%s\n",line);
  return 0;
}


void reverse_input(char line[], int length) {
  int i = length - 2;
  for (;i >= length / 2; i--) {
  int tmp = line[i];
    int j = length - 2 - i;
    line[i] = line[j];
    line[j] = tmp;
  }
}
