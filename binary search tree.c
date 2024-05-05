#include<stdio.h>
#include<stdlib.h>
void insertitem(int);
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *ptr,*item;
void main()
{
	int i;
	while( i!=3)
	{
		int ch;
		printf("1 for entering elements\n");
		printf("0 for entering exit\n");
		printf("ente coice \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insertitem( 7);
			break;
			case 0:
			exit(4);
			break;
	
		}
	}
}
void insertitem(data)
{
	printf("enter data");
	scanf("%d",&data);
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	ptr->data=item;
	while(ptr!=NULL)
	{
		if(ptr->data>data)
		{
			if(ptr->left==NULL)
			ptr->left=item;
    		ptr=ptr->left;
		}
		else if(ptr->data<item)
		{
			if(ptr->right==NULL)
			ptr->right=item;
			ptr=ptr->right;
		}
		
	}
	
}