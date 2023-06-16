#include<stdio.h>
void ternary();
int main()
{
	int n;
	printf("enter the value of n=");
	scanf("%d",&n);
	ternary(n);
}
void ternary(int n)
{
/*	if(n==0)
	printf("0");
	else if(n==1)
	printf("1");*/                       //both algorithms are correct
	if(n<3)
	printf("%d",n);
	else 
	{
		ternary(n/3);
		printf("%d",n%3);
	}
}
