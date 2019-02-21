#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* next;
  struct node* prev;
};

void append(struct node **head,int key){
  struct node* temp = (struct node*)malloc(sizeof(struct node));
  struct node* last = *head;
  temp->data = key;
  temp->next = NULL;
  if(*head == NULL){
    temp->prev = NULL;
    *head = temp;
    return;
  }
  while((*head)->next != NULL)
    (*head) = (*head)->next;
  (*head)->next = temp;
  temp->prev = *head;
  *head = last;
  return;
}

void printnode(struct node* head){
  while(head != NULL){
    printf("%d ",head->data);
    head = head->next;
  }
  printf("\n");
}

void main(){
  struct node *head = NULL;
  int n,t;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&t);
    append(&head,t);
  }
  printnode(head);
}
