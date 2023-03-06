/*08-05*/
#include <stdio.h>
#include <stdlib.h>

int mod(int, int);

int main(){
  int x, y;
  
  printf("Enter x: ");
  scanf("%d", &x);
  printf("Enter y: ");
  scanf("%d", &y);
  
  printf("The remainder of %d/%d is %d\n", x, y, mod(x, y));
}

int mod(int x, int y){
  return x % y;
}

/*
output:
Enter x: 17
Enter y: 5
The remainder of 17/5 is 2
*/