/*11-06*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
  struct date{
    int month;
    int day;
  };
  struct data{
    char name[10];
    int math;
    struct date birthday;
  } s1={"Mary Wang", 74, {10, 2}};
  
  printf("學生姓名：");
  scanf("%s", s1.name);
  printf("--生日--\n");
  printf("月份：");
  scanf("%d", &s1.birthday.month);
  printf("日期：");
  scanf("%d", &s1.birthday.day);
  printf("數學成績：");
  scanf("%d", &s1.math);
  
  printf("\n-----------------\n");
  
  printf("學生姓名：%s\n", s1.name);
  printf("生日：%d 月 %d 日\n", s1.birthday.month, s1.birthday.day);
  printf("數學成績：%d\n", s1.math);
}

/*
output:
學生姓名：Alex
--生日--
月份：2
日期：29
數學成績：88

-----------------
學生姓名：Alex
生日：2 月 29 日
數學成績：88
*/