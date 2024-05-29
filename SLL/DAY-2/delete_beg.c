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

  head=delete_beg(head);
  ptr=head;
  while(ptr!=null){
      printf("%d",ptr->data);
      ptr=ptr->link;
  }
  return 0;
}
struct node* delete_beg(struct node *head){
   if(head==null){
    printf("empty");
   }else{
      struct node *temp=head;
      head=head->link;
      free(temp);
      temp=null;
   }
   return head;
}
