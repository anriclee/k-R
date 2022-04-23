#include <stdio.h>

#define MAXLEN 100

void trailing_space(char line[], int len);

int get_input_line(char line[], int max_len);

int main(int argc, char *argv[]) {
  int len;
  char line[MAXLEN];
  while ((len = get_input_line(line, MAXLEN)) > 0) {
    trailing_space(line, len);
    printf("input is:%s\n", line);
  }
  return 0;
}

int get_input_line(char line[], int max_len) {
  int c;
  int i;

  for (i = 0; i < max_len - 1 && ((c = getchar()) != EOF) && c != '\n'; ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    i++;
  }

  line[i] = '\0';

  return i;
}

void trailing_space(char line[], int length) {
  int i;
  // length - 1 position is '\0'
  for (i = length - 2; i > 0 && (line[i] == '\t' || line[i] == ' '); i--) {
  }

  line[i+1] = '\0';
}
