#include<stdio.h>
int main()
{
  int s,d,n,i;
  printf("enter the range ");
  scanf("%d",&n);
  printf("enter the starting number");
  scanf("%d",&s);
  printf("enter the difference");
  scanf("%d",&d);
  for(i=;i<=n;i++)
  {
    s=s+d;
    printf("%d /n",s);
  }
  return 0 ;
  }
