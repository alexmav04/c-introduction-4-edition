/*14-08*/
#include <stdio.h>
#include <stdlib.h>

int deleteElement(int *arr, int pos, int length);

int main(void){
  int arr[] = {12, 56, 37, 63};
  int length = sizeof(arr) / sizeof(arr[0]);
  length = deleteElement(arr, 1, length);
  for (int i = 0; i < length; i++){
    printf("%3d", arr[i]);
  }
}

int deleteElement(int *arr, int pos, int length){
  for(int i = pos; i < length - 1; i++){
    arr[i] = arr[i+1];
  }
  arr[length-1] = 0;
  return length - 1;
}

/*
output:
12 37 63
*/