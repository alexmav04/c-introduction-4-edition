/*14-01*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int *ptr = (int *)malloc(sizeof(int));
  *ptr = 12;
  
  printf("The square of %d is %d.\n", *ptr, *ptr * *ptr);
  free(ptr);
}

/*
output:
The square of 12 is 144.
*/