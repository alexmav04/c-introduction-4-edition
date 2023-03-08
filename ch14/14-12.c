/*14-12*/
#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};

typedef struct node NODE;

int main(void){
  NODE *a, *b, *c, *d;
  NODE *ptr;
  
  a = (NODE *)malloc(sizeof(NODE));
  b = (NODE *)malloc(sizeof(NODE));
  c = (NODE *)malloc(sizeof(NODE));
  d = (NODE *)malloc(sizeof(NODE));
  
  a->data = 12;
  a->next = b;
  b->data = 38;
  b->next = c;
  c->data = 64;
  c->next = d;
  d->data = 37;
  d->next = NULL;
  
  ptr = a;
  while(ptr != NULL){
    printf("adress: %p; ", ptr);
    printf("data: %d; ", ptr->data);
    printf("next: %p; \n", ptr->next);
    ptr = ptr->next;
  }
}

/*
output:
adress: 0x563c5ccf52a0; data: 12; next: 0x563c5ccf52c0; 
adress: 0x563c5ccf52c0; data: 38; next: 0x563c5ccf52e0; 
adress: 0x563c5ccf52e0; data: 64; next: 0x563c5ccf5300; 
adress: 0x563c5ccf5300; data: 37; next: (nil); 
*/