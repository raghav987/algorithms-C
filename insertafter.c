#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* next;
};
void PrintList(struct node *head){
  while(head != NULL){
    printf("%d ",(head)->data);
    head=(head)->next;
  }
  printf("\n");
}

void InsertAfter(struct node **head,int d){
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->data=d;
  if(*head == NULL)
  {
    temp->next = NULL;
    *head = temp;
  }
  else
  {
    temp->next=*head;
    *head = temp;
  }
}

void main(){
  struct node* head=NULL;
  int t,n;
  scanf("%d",&n);
  for(int i=0 ; i<n ; i++){
    scanf("%d",&t);
    InsertAfter(&head,t);
    }
  PrintList(head);
}
