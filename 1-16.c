#include <stdio.h>

#define MAX_LINE_LENGTH 1000 // maximum input line size

void copy(char to[], char from[]);
int get_input_line(char line[], int maxline);

int main(int argc, char *argv[]) {

  int max_length = 0;
  int len;

  char longest[MAX_LINE_LENGTH];
  char line[MAX_LINE_LENGTH];

  while ((len = get_input_line(line, MAX_LINE_LENGTH)) > 0) {
    if (len > max_length) {
      max_length = len;
      copy(longest, line);
    }
  }

  if (max_length > 0) {
    printf("%s\n", longest);
    printf("len is:%d\n", max_length);
  }

  return 0;
}

int get_input_line(char line[], int maxline) {
  int i;
  int c;

  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    i++;
    line[i] = '\0';
  } else {
    // for loop end cause of i has reached maxline - 1
    while ((c = getchar()) != EOF) {
      i++;
    }
  }
  return i;
}

void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
