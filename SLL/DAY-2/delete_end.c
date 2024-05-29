#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};
int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data=10;
  head->link=null;

  struct node *current = malloc(sizeof(struct node));
  current->data=20;
  current->link=null;
  head->link=current;

  current = malloc(sizeof(struct node));
  current->data=30;
  current->link=null;
  head->link->link=current;

  delete_end(head);
  ptr=head;
  while(ptr!=null){
      printf("%d",ptr->data);
      ptr=ptr->link;
  }
  return 0;
}
void delete_end(struct node *head){
  if(head==null){
     printf("list is empty");
  }else if(head->link=null){
     free(head);
     head=null;
  }else{
     struct node *temp=head;
     while(temp->link->link!=null){
       temp=temp->link;
     }
     free(temp->link);
     temp->link=null;
  }
}
  
