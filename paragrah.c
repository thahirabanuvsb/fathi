#include<stdio.h>
int main()
{
int i=0,count=0;
char parag[250];
printf("\n enter the paragraph");
while(i!='\0')
{
scanf("%d",&parag[i]);
i++;
}
while(i!='\0')
{
if(parag[i]=='')
{
++count;
}
printf(no of line:"%d",count);
}
