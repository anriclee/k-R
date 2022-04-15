#include<stdio.h>

int main(){
  float fahr;
  printf("%3s,%6s\n","摄氏温度","华氏温度");
  for (fahr = 300; fahr >= 0; fahr -= 20) {
    float celsius = 5.0 / 9.0 * (fahr - 32.0);
    printf("%3.0f %6.1f\n",celsius,fahr);
  }

  return 0;
}
