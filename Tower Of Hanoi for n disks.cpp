#include<stdio.h>

void toi( int n,char begin,char aux,char end)
{
	if(n==1)
	printf("\nmove disk from %c to %c",begin,end);
	else
	{
		toi(n-1,begin,end,aux);
		toi(1,begin,aux,end);
		toi(n-1,aux,begin,end);
	}
}

int main()
{
	int n;
	char begin,aux,end;
	printf("\nenter the value of n (number of disks)=");
	scanf("%d",&n);
	 toi(n,'a','b','c');
}
