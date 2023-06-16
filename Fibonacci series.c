//fibonacci series
#include<stdio.h>
int fib(int n);
int main()
{
	int i,n;
	printf("Entetr the number of terms = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	printf("%d ",fib(i));
}
int fib(int n)
{
	if(n==1||n==2)
	   return(1);
	else
	return(fib(n-1)+fib(n-2));
}