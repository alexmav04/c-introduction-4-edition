/*15-09*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int a = 159;
  int b = 0147;
  int c = 0x618A;
  
  printf("a_oct = %o\n", a);
  printf("a_dec = %d\n", a);
  printf("a_hex = %x\n", a);
  printf("\n");
  
  printf("b_oct = %o\n", b);
  printf("b_dec = %d\n", b);
  printf("b_hex = %x\n", b);
  printf("\n");
  
  printf("c_oct = %o\n", c);
  printf("c_dec = %d\n", c);
  printf("c_hex = %x\n", c);
}

/*
output:
a_oct = 237
a_dec = 159
a_hex = 9f

b_oct = 147
b_dec = 103
b_hex = 67

c_oct = 60612
c_dec = 24970
c_hex = 618a
*/