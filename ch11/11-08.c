/*11-08*/
#include <stdio.h>
#include <stdlib.h>

struct timeT{
  int hour;
  int minute;
  double second;
};

struct date {
  int year;
  int month;
  int date;
  struct timeT time;
}now={2023, 3, 1, {22, 30, 28}};

int main(){
  printf("Now: %02d/%02d/%04d  %02d:%02d:%2.2lf\n", now.month, now.date, now.year, now.time.hour, now.time.minute, now.time.second);
  printf("sizeof(now): %ld", sizeof(now));
}

/*
output:
Now: 03/01/2023  22:30:28.00
sizeof(now): 32
*/