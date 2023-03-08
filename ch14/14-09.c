/*14-09*/
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
  
  while(ptr != NULL){
    printf("adress: %p; ", ptr);
    printf("data: %d; ", ptr->data);
    printf("next: %p; \n", ptr->next);
    ptr = ptr->next;
  }
}

/*
output:
adress: 0x7ffe2fc68070; data: 12; next: 0x7ffe2fc68080;
adress: 0x7ffe2fc68080; data: 38; next: 0x7ffe2fc68090; 
adress: 0x7ffe2fc68090; data: 64; next: 0x7ffe2fc680a0; 
adress: 0x7ffe2fc680a0; data: 37; next: (nil);
*/