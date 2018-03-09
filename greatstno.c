#include <stdio.h>
int main()
{
int i,a[10],great;
printf("enter the 10 numbers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
great=a[0];
for(i=0;i<10;i++)
if(a[i]>great)
{
great=a[i];
}
printf("%d",great);
return 0;
}
