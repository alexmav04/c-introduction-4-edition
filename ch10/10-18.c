/*10-18*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  char *ptr = "We are best friends.";
  
  /*10-18-a*/
  printf("*********10-18-a*********\n");
  int counter = 0;
  
  while(*(ptr+counter) != '\0'){
    counter++;
  }
  printf("Number of characters: %d\n", counter);
  
  /*10-18-b*/
  printf("*********10-18-b*********\n");
  counter = 0;
  int i = 0;
  
  while(*(ptr+i) != '\0'){
    if (*(ptr + i) >= 97 && *(ptr + i) <= 122){
      counter++;
    }
    i++;
  }
  printf("Number of lowercases: %d\n", counter);
  
  return 0;
}

/*
output:
*********10-18-a*********
Number of characters: 20
*********10-18-b*********
Number of lowercases: 15
*/

