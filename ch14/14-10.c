/*14-10*/
#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};

typedef struct node NODE;

int main(void){
  NODE a, b, c, d;
  NODE newNode;
  NODE *ptr = &a;
  
  a.data = 12;
  a.next = &b;
  b.data = 38;
  b.next = &c;
  c.data = 64;
  c.next = &d;
  d.data = 37;
  d.next = NULL;
  
  printf("\n--Before inserting the element--\n");
  while(ptr != NULL){
    printf("adress: %p; ", ptr);
    printf("data: %d; ", ptr->data);
    printf("next: %p; \n", ptr->next);
    ptr = ptr->next;
  }
  
  newNode.data = 92;
  b.next = &newNode;
  newNode.next = &c;
  
  ptr = &a;
  printf("\n--After inserting the element--\n");
  while(ptr != NULL){
    printf("adress: %p; ", ptr);
    printf("data: %d; ", ptr->data);
    printf("next: %p; \n", ptr->next);
    ptr = ptr->next;
  }
}



/*
output:
--Before inserting the element--
adress: 0x7fffbf430950; data: 12; next: 0x7fffbf430960; 
adress: 0x7fffbf430960; data: 38; next: 0x7fffbf430970; 
adress: 0x7fffbf430970; data: 64; next: 0x7fffbf430980; 
adress: 0x7fffbf430980; data: 37; next: (nil); 

--After inserting the element--
adress: 0x7fffbf430950; data: 12; next: 0x7fffbf430960; 
adress: 0x7fffbf430960; data: 38; next: 0x7fffbf430990; 
adress: 0x7fffbf430990; data: 92; next: 0x7fffbf430970; 
adress: 0x7fffbf430970; data: 64; next: 0x7fffbf430980; 
adress: 0x7fffbf430980; data: 37; next: (nil);
*/