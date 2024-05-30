#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *prev;
  int data;
  struct node *next;
};
struct node* create(struct node* head, int data);
struct node* insert_end(struct node* head,int data);

int main(){
  struct node *head=NULL;
  struct node *ptr;
  head=create(head,10);
  head=insert_end(head,20);
  ptr=head;
  while(ptr!=NULL){
    printf("%d",ptr->data);
    ptr=ptr->next;
  } 
  return 0;
}

struct node* create(struct node* head, int data){
  struct node* temp=malloc(sizeof(struct node));
  temp->prev=NULL;
  temp->data=data;
  temp->next=NULL;
  head=temp;
  return head;
}
struct node* insert_end(struct node* head,int data){
   struct node* temp1=malloc(sizeof(struct node));
   temp1->prev=NULL;
   temp1->data=data;
   temp1->next=NULL;
   head->next=temp1;
   temp1->prev=head;
  
   return head;
}
