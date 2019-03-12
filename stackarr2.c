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
    int t,n;
    scanf("%d",&n);
    for(int i;i<n;i++){
      scanf("%d",&t);
      push(&s,t);
    }
    PrintStack(s);
    int k = pop(&s);
    printf("%d\n",k);
    PrintStack(s);
}
