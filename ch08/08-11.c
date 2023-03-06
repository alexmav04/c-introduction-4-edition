/*08-08*/
#include <stdio.h>
#include <stdlib.h>

double f(double);

int main(){
  double x[4] = {-3.2, -2.1, 0, 2.1};
  
  for (int i = 0; i < 4; i++){
    printf("f(%lf) = %lf\n", x[i], f(x[i]));
  }
}

double f(double x){
  return 3*(x*x*x) + 2*x - 1;
}

/*
output:
f(-3.200000) = -105.704000
f(-2.100000) = -32.983000
f(0.000000) = -1.000000
f(2.100000) = 30.983000
*/