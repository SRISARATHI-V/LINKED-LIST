#include<stdio.h>
#include<stdlib.h>

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
struct node* del_end(struct node* head){
  struct node* temp=head;
  struct node* temp2;
  while(temp->next!=NULL)
    temp=temp->next;
  temp2=temp->prev;
  temp2->next=NULL;
  free(temp);
  return head;
}
struct node* del_beg(struct node* head){
  struct node* temp=head;
  head=head->next;
  free(temp);
  temp=NULL;
  head->prev=NULL;
  return head;
}
struct node* del_pos(struct node* head,int position){
   struct node* temp=head;
   struct node* temp2=NULL;
   if(position==1){
     head=del_beg(head);
   }
   while(position>1){
      temp=temp->next;
      position--;
   }
   if(temp->next==NULL){
     head=del_end(head);
   }
   else{
     temp2=temp->prev;
     temp2->next=temp->next;
     temp->next->prev=temp2;
     free(temp);
     temp=NULL;
   }
   return head;
}
  

