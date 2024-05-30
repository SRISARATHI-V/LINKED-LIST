#include<stdio.h>
#include<stdlb.h>

struct node{
  struct node *prev;
  int data;
  struct node *next;
};

int main(){
  struct node *head=NULL;
  head=create(head,10);
  printf("%d",head->data);
  return 0;
}

struct node* create(struct node* head,int data){
  struct node* temp=malloc(sizeof(struct node));
  temp->prev=NULL;
  temp->data=data;
  temp->next=NULL;
  head=temp;
  return head;
}
