/*08-03*/
#include <stdio.h>
#include <stdlib.h>

int cub(int);

int main(){
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);
  printf("The cube of x is %d", cub(x));
}

int cub(int x){
  return x * x * x;
}

/*
output:
Enter a number: 2
The cube of x is 8
*/