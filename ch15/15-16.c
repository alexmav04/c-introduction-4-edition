/*15-16*/
#include <stdio.h>
#include <stdlib.h>

struct computer{
  unsigned floppy: 3;
  unsigned hard_disk: 6;
  unsigned cd_rom: 6;
  unsigned printer: 5;
}my_computer;

int main(){
  int num;
  printf("floppy : ");
  scanf("%d", &num);
  my_computer.floppy = num;
  
  printf("hard_disk : ");
  scanf("%d", &num);
  my_computer.hard_disk = num;
  
  printf("cd_rom : ");
  scanf("%d", &num);
  my_computer.cd_rom = num;
  
  printf("printer : ");
  scanf("%d", &num);
  my_computer.printer = num;
  
  printf("--------------------------------------\n");
  printf("Number of floppy    : %3d\n", my_computer.floppy);
  printf("Number of hard_disk : %3d\n", my_computer.hard_disk);
  printf("Number of cd_rom    : %3d\n", my_computer.cd_rom);
  printf("Number of printer   : %3d\n", my_computer.printer);
  
  printf("--------------------------------------\n");
  printf("Size of my_computer : %3ld\n", sizeof(my_computer));
}

/*
output:
floppy : 6
hard_disk : 40
cd_rom : 25
printer : 18
--------------------------------------
Number of floppy    :   6
Number of hard_disk :  40
Number of cd_rom    :  25
Number of printer   :  18
--------------------------------------
Size of my_computer :   4
*/