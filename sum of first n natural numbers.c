#include<stdio.h>
long sum(int n)
{
//	n=5;
	if(n==1)
	return(1);
	else
	if(n>1)
	return(n+sum(n-1));
}
int main()
{
//	long sum(int);
	int n=5;
	printf("enter the value of n =");
	scanf("%d",&n);
	sum(n);
	printf("the sum of first n natural numbers is %d",sum(n));	
}
