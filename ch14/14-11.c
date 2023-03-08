/*14-11*/
#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};

typedef struct node NODE;

int main(void){
  NODE a, b, c, d;
  NODE *ptr = &a;
  
  a.data = 12;
  a.next = &b;
  b.data = 38;
  b.next = &c;
  c.data = 64;
  c.next = &d;
  d.data = 37;
  d.next = NULL;
  
  printf("\n--Before deleting the element--\n");
  while(ptr != NULL){
    printf("adress: %p; ", ptr);
    printf("data: %d; ", ptr->data);
    printf("next: %p; \n", ptr->next);
    ptr = ptr->next;
  }
  
  a.next = &c;
  
  ptr = &a;
  printf("\n--After deleting the element--\n");
  while(ptr != NULL){
    printf("adress: %p; ", ptr);
    printf("data: %d; ", ptr->data);
    printf("next: %p; \n", ptr->next);
    ptr = ptr->next;
  }
}

/*
output:
--Before deleting the element--
adress: 0x7ffdf8fd6d80; data: 12; next: 0x7ffdf8fd6d90; 
adress: 0x7ffdf8fd6d90; data: 38; next: 0x7ffdf8fd6da0; 
adress: 0x7ffdf8fd6da0; data: 64; next: 0x7ffdf8fd6db0; 
adress: 0x7ffdf8fd6db0; data: 37; next: (nil); 

--After deleting the element--
adress: 0x7ffdf8fd6d80; data: 12; next: 0x7ffdf8fd6da0; 
adress: 0x7ffdf8fd6da0; data: 64; next: 0x7ffdf8fd6db0; 
adress: 0x7ffdf8fd6db0; data: 37; next: (nil); 
*/