/*08-09*/
#include <stdio.h>
#include <stdlib.h>

int prime(int);
int is_prime(int);

int main(){
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("The %dth prime is : %d\n", n, prime(n));
}

int prime(int n){
  int count = 0;
  int current = 0;
  while (count != n){
    current++;
    if (is_prime(current)){
      count++;
    }
  }
  return current;
}

int is_prime(int num){
  int i;
  if (num == 1){
    return 0;
  }
  for (i = 2; i< num-1; i++){
    if (num % i == 0){
      return 0;
    }
  }
  return 1;
}

/*
output:
Enter n: 100
The 100th prime is : 541
*/