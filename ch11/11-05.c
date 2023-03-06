/*11-05*/
#include <stdio.h>
#include <stdlib.h>

struct timeT{
  int hour;
  int minute;
  double second;
}start = {12, 32, 25.49}, end = {15, 12, 17.53}, process;

void timeCalculator (struct timeT*, struct timeT*);

int main(){
  printf("Size of date: %ld\n", sizeof(struct timeT));
}

/*
output:
Size of date: 16
*/