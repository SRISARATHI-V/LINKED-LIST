#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

int main(){
  struct node *head=malloc(sizeof(struct node));
  head->data=20;
  head->link=null;

  struct node *ptr=malloc(sizeof(struct node));
  ptr->data=10;
  ptr->link=null;
  
  head->link=ptr;
  int d=10;
  head=insert_beg(head,d);
  ptr=head;
  while(ptr!=null){
     printf("%d",ptr->data);
     ptr=ptr->next;
  }
  return 0;
}
struct node* insert_beg(struct node* head,int d){
   struct node *ptr=malloc(sizeof(struct node));
   ptr->data=d;
   ptr->link=null;
   ptr->link=head;
   head=ptr;
   return head;
}
 
