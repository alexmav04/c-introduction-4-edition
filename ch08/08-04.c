/*08-04*/
#include <stdio.h>
#include <stdlib.h>

double square(double);

int main(){
  double x;
  printf("Enter a number: ");
  scanf("%lf", &x);
  printf("The square of %lf is %lf", x, square(x));
}

double square(double x){
  return x * x;
}

/*
output:
Enter a number: 4.0
The square of 4.000000 is 16.000000
*/