
#include <stdio.h>
#include<math.h>
int main()
{
int a,b,n,i,c,d;
scanf("%d%d",&a,&n);
for(i=0;i<=n;i++)
{
	b=pow(2,i);
	if(b>a)
	{
		c=i;
		break;
	}
	d=pow(2,c);
	printf("%d",d);
}
	return 0;
}
