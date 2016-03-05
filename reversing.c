#include<stdio.h>
int main()
{
	int i,y,n,a[10];
	int temp=0;
	printf("size:");
	scanf("%d",&n);
	printf("array");
	for(i=1;i<=n;i++)	
	{
		scanf("%d",&a[i]);
	}
	y=(n)/2;
		if(n%2==0)
		{
			for(i=1;i<=y;i++)
			{
			temp=a[i];
			a[i]=a[i+y];
			a[i+y]=temp;
			}
		}
		else
		{
			for(i=1;i<=y;i++)
			{
				temp=a[i];
				a[i]=a[i+(y+1)];
				a[i+(y+1)]=temp;
				
			}
		}
printf("Reversed array: ");
for(i=1;i<=n;i++)
{
	printf("%d \n",a[i]);
}
return 0;
}
