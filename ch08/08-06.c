/*08-06*/
#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main(){
  int x, n;
  printf("Enter a number: ");
  scanf("%d", &x);
  printf("Enter a number: ");
  scanf("%d", &n);
  
  printf("%d raised to the power of %d is %d", x, n, power(x, n));
}

int power(int x, int n){
  int result = 1;
  for (int i = 0; i < n; i++){
    result *= x;
  }
  return result;
}

/*
output:
Enter a number: 5
Enter a number: 3
5 raised to the power of 3 is 125
*/