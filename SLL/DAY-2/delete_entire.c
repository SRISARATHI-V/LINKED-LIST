#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};
struct node* delete_entire(struct node *head);
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

  head=delete_entire(head);
  if(head==NULL){
    printf("already deleted");
  }
  return 0;
}

struct node* delete_entire(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
      temp=temp->link;
      free(head);
      head=temp;
    }
    return head;
}
