/*11-10*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(void){
  int i, top = 0, sum = 0;
  struct data{
    char name[10];
    int math;
  } student[MAX];
  
  for(i = 0; i < MAX; i++){
    printf("Student: ");
    scanf("%s", student[i].name);
    printf("Score: ");
    scanf("%d", &student[i].math);
    fflush(stdin);
  }
  printf("\n----------------\n");
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
Student: Jenny
Score: 65
Student: Teresa
Score: 88
Student: Alex
Score: 99
Student: Jojo
Score: 44
Student: Wade
Score: 10

----------------
Jojo failed the test: 44
Wade failed the test: 10
Average: 61
*/