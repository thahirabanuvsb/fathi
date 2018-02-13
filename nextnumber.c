#include<stdio.h>
int main()
{
  int a,n,sum=0;
  while(n!=0)
  {
    a=n%10;
    sum=sum+a;
    a=a/10;
  }
  printf("%d add of two digits",sum);
return 0;
}
