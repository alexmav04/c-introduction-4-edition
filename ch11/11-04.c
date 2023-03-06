/*11-04*/
#include <stdio.h>
#include <stdlib.h>

struct timeT{
  int hour;
  int minute;
  double second;
}start = {12, 32, 25.49}, end = {15, 12, 17.53}, process;

void timeCalculator (struct timeT*, struct timeT*);

int main(){
  printf("Start   : %02d:%02d:%2.2lf\n", start.hour, start.minute, start.second);
  printf("End     : %02d:%02d:%2.2lf\n", end.hour, end.minute, end.second);
  timeCalculator(&start, &end);
  printf("Process : %02d:%02d:%2.2lf\n", process.hour, process.minute, process.second);
}

void timeCalculator (struct timeT *start, struct timeT *end){
  process.second = end->second - start->second;
  if ((process.second) < 0){
    process.second += 60;
    end->minute--;
  }
  process.minute = end->minute - start->minute;
  if ((process.minute) < 0){
    process.minute += 60;
    end->hour--;
  }
  process.hour = end->hour - start->hour;
}

/*
output:
Start   : 12:32:25.49
End     : 15:12:17.53
Process : 02:39:52.04
*/

