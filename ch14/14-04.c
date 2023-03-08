/*14-04*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
  double *ptr, sum = 0;
  
  for (int i = 0; i < 3; i++){
    ptr = (double *)malloc(sizeof(double));
    printf("Enter number: ");
    scanf("%lf", ptr);
    sum += *ptr;
    fflush(stdin);
    free(ptr);
  }
  printf("Sum     = %lf\n", sum);
  printf("Average = %lf\n", sum / 3);
}

/*
output:
Enter number: 1.4
Enter number: 2.8
Enter number: 1.9
Sum     = 6.100000
Average = 2.033333
*/