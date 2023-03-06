/*11-03*/
#include <stdio.h>
#include <stdlib.h>

struct date {
  int year;
  int month;
  int date;
}holiday={2004, 4, 26}, festival;

int main(){
  printf("Size of date: %ld\n", sizeof(struct date));
}

/*
output:
Size of date: 12
*/