#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *prev;
  int data;
  struct node *next;
};
struct node* create(struct node* head, int data);
struct node* insert_end(struct node* head,int data);
struct node* reverse(struct node* head);

int main(){
  struct node *head=NULL;
  struct node *ptr;
  head=create(head,10);
  head=insert_end(head,20);
  head=insert_end(head,30);
  head=reverse(head);
  return0;
  
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
   struct node* temp,*tp;
   temp=malloc(sizeof(struct node));
   temp->prev=NULL;
   temp->data=data;
   temp->next=NULL;
   tp=head;
   while(tp->next!=NULL){
       tp=tp->next;
   }
   tp->next=temp;
   temp->prev=tp;
   return head;
}
struct node* reverse(struct node* head){
  struct node* ptr1=head;
  struct node* ptr2=ptr1->next;
  ptr1->next=NULL;
  ptr1->prev=ptr2;
  while(ptr2!=NULL){
    ptr2->prev=ptr2->next;
    ptr2->next=ptr1;
    ptr1=ptr2;
    ptr2=ptr2->prev;
  }
  head=ptr1;
  return head;
}
