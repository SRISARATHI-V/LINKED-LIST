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
  

int main(){
  struct node* head=NULL;
  struct node* ptr;
  int position=2;
  head=create(head,10);
  head=insert_end(head,20);
  head=insert_end(head,30);
  printf("%d",head);
  head=del_end(head);
  printf("%d",head);
  return head;
}
