/*11-01*/
#include <stdio.h>
#include <stdlib.h>

struct data {
  int num;
  char ch;
  double dist;
}aaa;

int main(){
  printf("size of aaa: %ld\n", sizeof(aaa));
  
  return 0;
}

/*
output:
size of aaa: 16
*/