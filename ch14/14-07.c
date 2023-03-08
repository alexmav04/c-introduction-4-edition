/*14-07*/
#include <stdio.h>
#include <stdlib.h>

int insertElement(int *arr, int item, int pos, int length);

int main(void){
  int arr[] = {12, 56, 37, 63};
  int length = sizeof(arr) / sizeof(arr[0]);
  length = insertElement(arr, 10, 2, length);
  for (int i = 0; i < length; i++){
    printf("%3d", arr[i]);
  }
}

int insertElement(int *arr, int item, int pos, int length){
  for(int i = length; i >= pos; i--){
    arr[i] = arr[i-1];
  }
  arr[pos] = item;
  return length + 1;
}

/*
output:
12 56 10 37 63
*/