/*08-02*/
#include <stdio.h>
#include <stdlib.h>

void kitty (int);

int main(){
  int k;
  printf("Enter a number: ");
  scanf("%d", &k);
  
  kitty(k);
}

void kitty (int k){
  for (int i = 0; i < k; i++){
    printf("Hello Kitty\n");
  }
}

/*
output:
Enter a number: 5
Hello Kitty
Hello Kitty
Hello Kitty
Hello Kitty
Hello Kitty
*/

