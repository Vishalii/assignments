#include<stdio.h>
int main()
{
int no,a[10],i,p,num;
printf("enter the no of elements in an array");
scanf("%d",&no);
printf("enter the array");
for(i=0;i<=no;i++)
{
scanf("%d",&a[i]);

}
printf("position \n");
scanf("%d",&p);
printf("element to b added \n");
scanf("%d",&num);
for(i=no;i>p;i--)
{
a[i+1]=a[i];
}
a[p]=num;
printf("the inserted array is");
printf("\n");
for(i=0;i<=no;i++)
{
printf("%d", a[i]);
}
return 0;
}
