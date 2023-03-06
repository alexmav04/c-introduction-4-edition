/*11-02*/
#include <stdio.h>
#include <stdlib.h>

struct date {
  int year;
  int month;
  int date;
}holiday={2004, 4, 26}, festival;

int main(){
  printf("Year: ");
  scanf("%d", &festival.year);
  printf("Mmonth: ");
  scanf("%d", &festival.month);
  printf("Date: ");
  scanf("%d", &festival.date);
  
  printf("\n");
  printf("Holiday: %02d/%02d/%04d\n", holiday.month, holiday.date, holiday.year);
  printf("Festival: %02d/%02d/%04d\n", festival.month, festival.date, festival.year);
}

/*
output:
Year: 2005
Mmonth: 12
Date: 25

Holiday: 04/26/2004
Festival: 12/25/2005
*/

