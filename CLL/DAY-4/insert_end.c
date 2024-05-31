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
struct node* insert_end(struct node* tail,int data){
  struct node* newp=malloc(sizeof(struct node));
  newp->data=data;
  newp->next=NULL;
  newp->next=tail->next;
  tail->next=newp;
  tail=tail->next;
  return tail;
}
void print(struct node* tail)
{
  struct node* p=tail->next;
  do{
    printf("%d",p->data);
    p=p->next;
  }while(p!=tail->next)
}
int main()
{
  struct node* tail;
  int data1=30;
  int data2=40;
  tail= create(10);
  tail= insert_beg(tail,20);
  tail=insert_beg(tail,50);
  tail=insert_end(tail,60);
  
  
  return 0;
}
