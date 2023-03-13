/*11-09*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(void){
  int i, top = 0, sum = 0;
  struct data{
    char name[10];
    int math;
  } student[MAX]={{"Jenny", 65}, {"Teresa", 88}, {"Alex", 99}, {"Jojo", 44}, {"Wade", 10}};
  
  for(i = 0; i < MAX; i++){
    if (student[top].math < student[i].math){
      top = i;
    }
    sum += student[i].math;
  }
  for(i = 0; i < MAX; i++){
    if (student[i].math < 60){
      printf("%s failed the test: %d\n", student[i].name, student[i].math);
    }
  }
  printf("Average: %d", sum / MAX);
  
  return 0;
}


/*
output:
Jojo failed the test: 44
Wade failed the test: 10
Average: 61
*/

