#include<stdio.h>
int main()
{
	double a[]={1,2,3,4,5};
	int b[]={1,2,3,4,5,6,7,8,9,0,11,22,33,44,55,66,77,88,88,99,10,12,13,14,16,15,17,18,19};
	float u;
	u =sizeof(a);                 // size of gives the number of bytes of data type.
	printf("%f\n",u);
	int i =sizeof(b);
	printf("%d\n",i);
	int c =sizeof(a[0]);                 // size of gives the number of bytes of data type.
	printf("%d\n",c);
	int d =sizeof(b[0]);                 // size of gives the number of bytes of data type.
	printf("%d\n",d);
}