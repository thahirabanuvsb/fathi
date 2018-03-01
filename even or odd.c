#include<stdio.h>
int main()
{
int a,b,n;
scanf("%d%d",&a,&b);
n=a*b;
      printf("%d",n);
      if(n%2==0)
      {
            printf("the no is even");
      }
      else
      {
            printf("the no is odd");
      }
      return 0;
}
