/*10-02*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  float num = 4.2f;
  int a1 = 4, a2 = 12;
  
  printf("num address: %p\n", &num);
  printf("a1 address: %p\n", &a1);
  printf("a2 address: %p\n", &a2);
  
  return 0;
}

/*
output:
num address: 0x7ffe3a6ff79c
a1 address: 0x7ffe3a6ff7a0
a2 address: 0x7ffe3a6ff7a4
*/