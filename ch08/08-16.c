/*08-16*/
#include <stdio.h>
#include <stdlib.h>

int find_k(int);
double abso(double);

int main(){
  int n;
  printf("Enter a number:");
  scanf("%d", &n);
  printf("The nearest k is: %d\n", find_k(n));
}

int find_k(int n){
  int k1 = (n - 2)/4;
  int k2 = k1 + 1;
  
  if (abs((4*k1+2) - n) <= abs((4*k2+2) - n)){
    return k1;
  } else {
    return k2;
  }
}

double abso(double x){
  if (x >= 0){
    return x; 
  } else {
    return -x;
  }
}

/*
output:
Enter a number:19
The nearest k is: 4
*/