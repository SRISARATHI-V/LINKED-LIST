#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};
int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data=10;
  head->link=null;

  struct node *current = malloc(sizeof(struct node));
  current->data=20;
  current->link=null;
  head->link=current;

  current = malloc(sizeof(struct node));
  current->data=30;
  current->link=null;
  head->link->link=current;

  int data=40,position=3
  insert_pos(head,data,position);
  struct node *ptr=head;
  while(ptr!=null){
     printf("%d",ptr->data);
     ptr=ptr->link;
  }
  return 0;
}

void insert_pos(struct node* head,int data,int pos){
  struct node *ptr=head;
  struct node *ptr2=malloc(sizeof(struct node));
  ptr2->data=data;
  ptr2->link=null;
  pos--;
  while(pos!=1){
     ptr=ptr->link;
     pos--;
  }
 ptr2->link=ptr->link;
 ptr->link=ptr2;
}

