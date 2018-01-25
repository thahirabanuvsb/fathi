#include<stdio.h>
int main()
{
  int n,result=0,t,d;
  printf("enter the no",n);
  n=t;
  while(n!=0);
  {
    d=n%10;
    result=result+(d*d*d);
    n=n/10;
  }
  if(t==result)
  {
    printf("the no is amstrong");
  }
    else
    {
      printf("no is not amstrong");
    }
  return0;
}

