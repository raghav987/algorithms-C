#include<stdio.h>

int main()
{
  int a[]={11,22,33,44,55};
  int *p;
  //int *p[]={a,a+1,a+2,a+3,a+3,a+4};//act like double pointers
  p=a;
  printf("%p\n",a);//address
  printf("%d\n",*p);//11
  printf("%d\n",*p++);//post implement
  //first it will print the than address of is incresed
  //11
  //precidence level
  printf("%d\n",*++p);
  //first it will increase the address
  //33
  printf("%d\n",++*p);
  //*p is the value
  //34
  //34is the result because we have apdated every time we are printing
  printf("%d\n",*p+2);
  //36
  printf("%d\n",*(p+2));
  //55
  return 0;
}
