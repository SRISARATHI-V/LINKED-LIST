#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};
void delete_pos(struct node **head,int position);

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
  int position=2;

  delete_pos(&head,position);
  struct node *ptr;
  ptr=head;
  while(ptr!=NULL){
      printf("%d",ptr->data);
      ptr=ptr->link;
  }
  return 0;
}

void delete_pos(struct node **head,int position){
   struct node *current=*head;
   struct node *previous=*head;
   if (*head=NULL){
     printf("list is empty");
   }else if(position ==1){
     *head=current->link;
      free(current);
      current=NULL;
   }else{
      while(position!=1){
         previous=current;
         current=current->link;
         position--;
      }
      previous->link=current->link;
      free(current);
      current=NULL;
   }
}

      
