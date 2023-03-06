/*10-03*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  double b1 = 3.14;
  int num = 5;
  
  printf("b1 address: %p\n", &b1);
  printf("num address: %p\n", &num);
  
  return 0;
}

/*
output:
b1 address: 0x7ffd85bc58e0
num address: 0x7ffd85bc58dc
*/