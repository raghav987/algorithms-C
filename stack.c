#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct stack{
  int data;
  struct stack* next;
};

void push(struct stack** head,int d){
  struct stack* temp=(struct stack*)malloc(sizeof(struct stack));
  temp->data=d;
  temp->next=NULL;
  if(*head == NULL){
    *head = temp;
  }
  else{
    temp->next=*head;
    *head = temp;
  }
}

int pop(struct stack** head){
  struct stack* temp=(struct stack*)malloc(sizeof(struct stack));
  if(*head == NULL){
    printf("stack is UNDERFLOW");
  }
  else{
    temp = *head;
    int n=temp->data;
    *head = temp->next;
    temp->next=NULL;
    return n;
  }
}

void PrintStack(struct stack* head){
  while(head != NULL){
    printf("%d ",head->data);
    head = head->next;
  }
  printf("\n");
}

void main(){
  struct stack* head=NULL;
  int n,t;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&t);
    push(&head,t);
  }
  PrintStack(head);
  int k=pop(&head);
  printf("%d is popped out\n",k);
  PrintStack(head);
}
