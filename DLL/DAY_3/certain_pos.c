#include<stdio.h>
#include<stdlb.h>

struct node{
  struct node *prev;
  int data;
  struct node *next;
};
struct node* create(struct node* head,int data){
  struct node* temp=malloc(sizeof(struct node));
  temp->prev=NULL;
  temp->data=data;
  temp->next=NULL;
  head=temp;
  return head;
}
struct node* insert_beg(struct node* head,int data){
   struct node* temp1=malloc(sizeof(struct node));
   temp1->prev=NULL;
   temp1->data=data;
   temp1->next=NULL;
   temp1->next=head;
   head->prev=temp1;
   head=temp1;
   return head;
}
struct node* insert_end(struct node* head,int data){
   struct node* temp,*tp;
   temp=malloc(sizeof(struct node));
   temp1->prev=NULL;
   temp1->data=data;
   temp1->next=NULL;
   tp=head;
   while(tp->next!=NULL){
       tp=tp->next;
   }
   tp->next=temp;
   temp->Prev=tp;
   
  
  
   return head;
}
struct node* add_pos(struct node* head,int data,int pos){
  
