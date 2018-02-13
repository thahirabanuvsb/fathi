include<stdio.h>
int main()
{
int n,a,rem,count=0;
  scanf("%d",&a);
  n=a;
  while(n!=0);
  {
    rem=n%10;
    ++count;
    n=n%10;
  }
  printf("%d",count);
return 0;
}

