/*15-11*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int a = 154, b = 67;
  
  printf("%d & %d = %d\n", a, b, a&b);
  printf("%d | %d = %d\n", a, b, a|b);
  printf("%d ^ %d = %d\n", a, b, a^b);
}

/*
output:
154 & 67 = 2
154 | 67 = 219
154 ^ 67 = 217
*/