#include<stdio.h>
int main()
{
int sum=0,i,n,avg,a[3];
scanf("%d",&n);
for(i=1;i<=3;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
sum=sum+a[i];
}
printf("%d sum of all no",sum);
avg=sum/n;
printf("%d avg no is",avg);
return 0;
}
