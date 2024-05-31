#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* next;
};
struct node* create(int data){
  struct node* temp=malloc(sizeof(struct node));
  temp->data=data;
  temp->next=temp;
  return temp;
}
struct node* insert_beg(struct node *tail, int data){
 struct node* newp=malloc(sizeof(struct node));
 newp->data=data;
 newp->next=tail->next;
 tail->next=newp;
 return tail;
}
int main()
{
  struct node* tail;
  tail= create(10);
  tail= insert_beg(tail,20);
  
  return 0;
}
