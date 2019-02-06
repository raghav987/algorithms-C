#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* next;
};

void insert(struct node **head,int d){
  struct node* temp=(struct node*)malloc(sizeof(struct node));
  struct node *last = *head;
  temp->data = d;
  temp->next = NULL;
  if(*head == NULL){
    *head = temp;
    return;
  }
  while (last->next != NULL) {
    last = last->next;
  }
  last->next = temp;
  return;
}

void PrintList(struct node *head){
  while(head != NULL){
    printf("%d ",(head)->data);
    head=(head)->next;
  }
  printf("\n");
}

void main(){
  struct node* head=NULL;
  int t,n;
  scanf("%d",&n);
  for(int i=0 ; i<n ; i++){
    scanf("%d",&t);
    insert(&head,t);
    }
  PrintList(head);
}
