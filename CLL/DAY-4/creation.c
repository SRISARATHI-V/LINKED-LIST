#include<stdio.h>
#include<stdlib.h>

struct node {
 int data;
 struct node* next;
}
struct node* creation(int data){
  struct node* temp=malloc(sizeof(struct node));
  temp->data=data;
  temp->next=temp;
  return temp;
}
int main(){
  int data=2024;
  struct node* tail=;
  tail=creation(data);
  printf("%d",data);
  return 0;
}
