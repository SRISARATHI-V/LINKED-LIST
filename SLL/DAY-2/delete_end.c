#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
void delete_end(struct node *head);
};
int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data=10;
  head->link=NULL;

  struct node *current = malloc(sizeof(struct node));
  current->data=20;
  current->link=NULL;
  head->link=current;

  current = malloc(sizeof(struct node));
  current->data=30;
  current->link=NULL;
  head->link->link=current;

  delete_end(head);
  ptr=head;
  while(ptr!=NULL){
      printf("%d",ptr->data);
      ptr=ptr->link;
  }
  return 0;
}
void delete_end(struct node *head){
  if(head==NULL){
     printf("list is empty");
  }else if(head->link=NULL){
     free(head);
     head=NULL;
  }else{
     struct node *temp=head;
     while(temp->link->link!=NULL){
       temp=temp->link;
     }
     free(temp->link);
     temp->link=NULL;
  }
}
  
