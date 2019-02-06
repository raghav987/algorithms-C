#include<stdio.h>

int main(){
  int test_case;
  scanf("%d",&test_case);
  for(int j=0;j<test_case;j++)
  {
  int no_prob,t=0;
  scanf("%d",&no_prob);
  int Appy,Chef;
  scanf("%d %d",&Appy,&Chef);
  int W;
  scanf("%d",&W);
  for(int i = 1; i <=no_prob ; i++){
    if((i % Appy == 0) && (i % Chef != 0))
      t++;
    else if((i % Appy != 0) && (i % Chef == 0))
      t++;
    }
  if(t >= W)
    printf("Win\n");
  else
    printf("Lose\n");
  }
  return 0;
}
