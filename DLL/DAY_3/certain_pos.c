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
  struct node* newp=NULL;
  struct node* temp=head;
  struct node* temp2=NULL;
  newp=create(newp,data);
  while(position!=1){
    temp=temp->next;
    position--;
  }
  if(temp->next==NULL){
    temp->next=newp;
    newp->prev=temp;
  }else{
    temp2=temp->next;
    temp->next=newp;
    temp2->prev=newp;
    newp->next=temp2;
    newp->prev=temp;
  }
  return head;
}

int main(){
  struct node* head=NULL;
  struct node* ptr;
  int position=2;
  head=create(head,10);
  head=insert_beg(head,20);
  head=insert_end(head,30);
  head=add_pos(head,40,position);
  ptr=head;
  while(ptr!=NULL){
   printf("%d",ptr->data);
   ptr=ptr->next;
  }
  return 0;
}

