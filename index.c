#include<stdio.h>
int main()
{
	int a[10],i,x,size,s=-1;
	printf("size \n");
	scanf("%d",&size);
	printf("array \n");
	for(i=0;i<=size;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("number \n");
	scanf("%d",&x);
	for(i=0;i<=size;i++)
	{

		if(a[i]>x)
		{
			printf("%d",i);
		}
		else if(i==size)
		{
			printf("%d", s);
		}
	}
return 0;
}
