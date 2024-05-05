#include<stdio.h>
void bubble_sort(int arr[],int n)
{
	int round,j;
	for(round=0;round<n-1;round++)
	{
		for(j=0;j<n-round-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
			}
		}
	}
}
int main()
{
	int arr[]={7,9,1,3,2,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,n);
	printf("sorted array ");
	for(int i=0;i<n;i++){
		printf("%d, ",arr[i]);
	}
}