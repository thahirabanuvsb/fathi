#include<stdio.h>
int main()
{
int m,n;
char a[20],b[50];
printf("enter the fst string");
scanf("%d",&a);
printf("enter the sec string");
scanf("%d",&b);
m=strlen(a);
n=strlen(b);
if(m>n)
{
printf("%d",m);
}
else if(n>m)
{
printf("%d",n);
}
else
{
printf("%d%d",m,n);
}
return 0;
}
