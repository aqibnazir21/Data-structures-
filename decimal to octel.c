#include<stdio.h>
void octel();

int main()
{
	int n=67;
	octel(n);
}
void octel(int n)
{
	if(n<8)
	printf("%d",n);
	else
	{
	    octel(n/8);
	    printf("%d",n%8);
    }
}
