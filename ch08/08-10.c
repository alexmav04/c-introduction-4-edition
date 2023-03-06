/*08-10*/
#include <stdio.h>
#include <stdlib.h>

int isMersenne(int);
int isPrime(int);
int power(int, int);

int main(){
  int num = 2;
  int count = 0;
  
  printf("First 8 Mersenne prime:\n");
  
  while (count < 8){
    if (isMersenne(num)){
      printf("%d \n", num);
      count++;
    }
    num++;
  }
}

int isMersenne(int x){
  int p = 0;
  if (isPrime(x)){
    while ((power(2, p) - 1) <= x){
      if ((power(2, p) - 1) == x){
        return 1;
      }
      p++;
    }
  }
  return 0;
}

int isPrime(int num){
  for(int i = 2; i <= num/2; i++){
    if (num % i == 0){
      return 0;
    }
  }
  if (num != 1){
    return 1;
  } else {
    return 0;
  }
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
First 8 Mersenne prime:
3 
7 
31 
127 
8191 
131071 
524287
2147483647
*/