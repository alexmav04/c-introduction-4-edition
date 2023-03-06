/*15-10*/
#include <stdio.h>
#include <stdlib.h>

void transDecHex(int);

int main(){
  int num;
  
  printf("Enter a number = ");
  scanf("%o", &num);
  transDecHex(num);
}

void transDecHex(int num){
  printf("num_dec = %d\n", num);
  printf("num_hex = %x\n", num);
}

/*
output:
Enter a number = 0147
num_dec = 103
num_hex = 67
*/