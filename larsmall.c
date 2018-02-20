#include<stdio.h>
int main()
{
int lar,small,a[5],i,n;
  scanf("%d",&n);
  for(i=0;i<5;i++)
    scanf("%d",&a[i]);
  largest=a[0];
	for(i=0;i<n;i++)
	if(a[i]>largest)
	largest=a[i];
	printf("%d is the largest\n",largest);
	smallest=a[0];
	for(i=0;i<n;i++)
	if(a[i]<smallest)
  smallest=a[i];
	printf("%d is the smallest",smallest);
	return 0;
return 0;
}
