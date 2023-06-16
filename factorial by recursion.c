#include<stdio.h>
int main()
{
	long fact(int);
	int n;
	printf("enter the value of n =");
	scanf("%d",&n);
	printf("the factorial of %d is %d",n,fact(n));
}
long fact(int n)
{
	if(n>0)
	return(n*fact(n-1));
	else
	return (1);
}