#include<stdio.h>
int main()
{
  char s;
  printf("enter any character");
  scanf("%c",&s);
  if((s>='a'&&s<='z')||(s>='A'&&s<='Z'))
    [
    printf("%c is albhabat",s);
    }
    else if(s>='0'&&s<='9')
    {
      printf("%c is digits",s);
    }
    else
    {
      printf("%d is spec chr",s);
    }
}
