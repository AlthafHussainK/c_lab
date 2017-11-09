#include<stdio.h>
#include<stdlib.h>

void main()
{
  struct node
  {
    int data;
    struct node *next;
  };

  struct node *head=NULL;
  struct node *ptr;

  struct node *link = (node*)malloc(sizeof(node));
  link->data =t;
  link->next =head;
  head = link;

  ptr = head;
  while (ptr!=NULL) {
    ptr= ptr->next;
    printf("%d=>",ptr->next);
  }
}
