/*10-15*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[5] = {31, 17, 33, 22, 16};
  int *ptr = arr;
  
  for (int i = 0; i < 5; i++){
    printf("%d ", *(ptr+i)+10);
  }
  return 0;
}

/*
output:
41 27 43 32 26
*/