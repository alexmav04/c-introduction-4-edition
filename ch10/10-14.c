/*10-14*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[5] = {34, 76, 33, 42, 76};
  
  for (int i = 0; i < 5; i++){
    printf("%d ", *(arr+i)+10);
  }
  return 0;
}

/*
output:
44 86 43 52 86 
*/