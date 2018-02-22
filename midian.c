#include<stdio.h>
int main()
{
int a[50],n,t,i,j;
scanf("%d",&n);
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
for(i=0;i<=n;i++)
{
for(J=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("%d",middle no a[n/2];
return 0;
]
