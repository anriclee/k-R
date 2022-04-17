#include <stdio.h>

#define IN 1 //  in a word
#define OUT 0 // out of a word

int main (int argc, char *argv[])
{
  int c,nl,nw,nc,state;

  state = OUT;
  nl = 0;
  nw = 0;
  nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      nl++;
    }
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      printf("\n");
    } else {
      putchar(c);
      if (state == OUT) {
        state = IN;
        nw++;
      } 
    }
  }


  printf("%d %d %d\n",nl,nw,nc);

  return 0;
}

/* I have no idea how to test it, according to a answer from ZhiHu, a case can be tested using a ' ? ', then the '?' can be recognized to an new word .*/
