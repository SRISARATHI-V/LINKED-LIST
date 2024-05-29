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
  head=reverse(head)
  ptr=head;
  while(ptr!=null){
    printf("%d",ptr->data);
    ptr=ptr->next;
  
  }
  return 0;
}

struct node* reverse(struct node *head){
   struct node *prev=null;
   struct node *next=null;
   while(head!=null){
   next=head->link;
   head->link=prev;
   prev=head;
   head=next;
   }
}
