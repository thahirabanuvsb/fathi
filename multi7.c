
#include <stdio.h>
int main()
{
int d,c,r;
scanf("%d%d",&d,&c);
r=d%c;
printf("%d",r);
if(r==0)
{
	printf("%d yes",r);
}
else
{
	printf("%d no",r);
}
return 0;
}
