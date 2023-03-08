/*14-03*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
  double *ptr = (double *)malloc(3 * sizeof(double));
  
  for (int i = 0; i < 3; i++){
    printf("Enter number: ");
    scanf("%lf", (ptr + i));
    fflush(stdin);
  }
  double sum = *ptr + *(ptr + 1) + *(ptr + 2);
  
  printf("%lf + %lf + %lf = %lf\n", *ptr, *(ptr + 1), *(ptr + 2), sum);
  printf("Average = %lf\n", sum / 3);
  free(ptr);
}

/*
output:
Enter number: 1.4
Enter number: 2.8
Enter number: 1.9
1.400000 + 2.800000 + 1.900000 = 6.100000
Average = 2.033333
*/