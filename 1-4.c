#include <stdio.h>

int main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("%3s,%6s\n","摄氏温度","华氏温度");
  while (celsius <= upper) {
    fahr = 9.0 / 5.0 * (celsius) + 32.0;
    printf("%3.0f %6.1f\n",celsius,fahr);
    celsius += step;
  }
}
