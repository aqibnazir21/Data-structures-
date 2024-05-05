#include<stdio.h>
int main ()
{
	int i,n,ar[50],pos,ins;
	printf("enter the size of an array =");
	scanf("%d",&n);
	printf("enter the elements of an array\n");
	for(i=0;i<=n;i++)
	{
		printf("ar[%d]=",i);
		scanf("%d",&ar[i]);
	}
	printf("entered array is \n");
	for(i=0;i<=n;i++)
	{
		printf("ar[%d]=",i);
		printf("%d\n",ar[i]);
	}
	printf("\nenter the position at which you want to delete in an array =");
	scanf("%d",&pos);
	if(pos>n)
	printf("deletion is not possible\n");
	else
	{
		for(i=pos-1;i<=n-1;i++)
		ar[i]=ar[i+1];
		for(i=0;i<=n-1;i++)
    	{
    		printf("ar[%d]=",i);
    		printf("%d ",ar[i]);
    	}
	}
	printf("\nenter the position at which you want to insert in an array =");
	scanf("%d",&ins);
	n++;
	if(pos>n-1)
	printf("insertion  is not possible\n");
	else
	{
		for(i=n-1;i>=ins+1;i--)
		ar[i]=ar[i-1];
		ar[ins-1]=31;
		for(i=0;i<=n-1;i++)
    	{
    		printf("ar[%d]=",i);
    		printf("%d ",ar[i]);
    	}
	}
}