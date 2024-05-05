#include<stdio.h>
//Quick sort
int qs(int n[],int f,int l)
{
	int pivot,i,j,t;
	if(f<l)
    {
    	printf("in func\n");
    	pivot=f;
    	i=f;                                   //positions are stored in i
    //	printf("\n %d",i);
    	j=l;
    	for(i=0;i<j;i++)                       // we can also use while(i<j)
    	{
    		while(n[i]<=n[pivot])
    		{
    			i++;
			}
			while(n[j]>n[pivot])
			j--;
			if(i<j)
			{
				t=n[i];
				n[i]=n[j];
				n[j]=t;
			}
		}
		t=n[pivot];
		n[pivot]=n[j];
		n[j]=t;
		qs(n,f,j-1);
		qs(n,j+1,l);
	
	}		
}
int main()
{
	int i,k,s,count;
	int n[]={1,3,5,7,9,2,4,6,8};
	s=sizeof(n)/sizeof(n[0]);
	qs(n,0,s-1);

	for(k=0;k<9;k++)
	{
		printf("%d ",n[k]);
	}
}