#include<stdio.h>
int main()
{
int i,n,sr=0;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
sr=0;
}
}
if(sr==0)
{
printf("%d is a prime no",n);
}
else
{
printf("%d not a prime",n);
}
return 0;
}
