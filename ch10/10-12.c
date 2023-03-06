/*10-12*/
/*這題有些怪異，並沒有指定陣列大小，但指標無法知道指向的陣列大小，
所以參數決定多加一個，可用性比較大*/

#include <stdio.h>
#include <stdlib.h>

void square(int *arr, int size);

int main(){
  int a[5] = {1, 2, 3, 4, 5};
  int size = sizeof(a)/sizeof(a[0]);
  square(a, size);
  
  for (int i = 0; i < size; i++){
    printf("%d ", a[i]);
  }
  return 0;
}

void square(int *arr, int size){
  for (int i = 0; i < size; i++){
    arr[i] *= arr[i];
  }
}

/*
output:
1 4 9 16 25
*/