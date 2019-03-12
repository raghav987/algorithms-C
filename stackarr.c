#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAXLIMIT 100

struct stack{
  int data[MAXLIMIT];
  int top;
};

void create(struct stack* s){
  s->top = -1;
}

bool IsEmpty(struct stack s){
  if(s.top == -1)
    return true;
  return false;
}

void push(struct stack* s,int key){
  if(s->top == MAXLIMIT-1){
    printf("stack OVERFLOW\n");
  }
  s->top++;
  s->data[s->top] = key;
}

int pop(struct stack* s){
  int t;
  if(s->top == -1){
    printf("stack is UNDERFLOW\n");
    return -99;
  }
  t = s->data[s->top];
  s->top--;
  return t;
}

void PrintStack(struct stack s){
  while(true){
    if(!IsEmpty(s))
      printf("%d ",pop(&s));
    else
      break;
  }
  printf("\n");
}

void main(){
    struct stack s;
    create(&s);
    push(&s,10);
    push(&s,20);
    push(&s,30);
    push(&s,40);
    int t = pop(&s);
    printf("%d \n",t);
    PrintStack(s);
}
