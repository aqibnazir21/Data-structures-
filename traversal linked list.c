#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
struct node* createnode()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	return (temp);
}
void insertnode()
{
	struct node *temp,*t;
	temp=createnode();
	printf("enter value=");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL)
	start=temp;
	else
	{
		t=start;
		while(t->next!=NULL){
		t=t->next;}
		t->next=temp;
	}
	
}
void trav()
{
	struct node *t;
	
	if(start==NULL)
	printf("list is empty");
	else
	{
	    t=start;	
	    while(t!=NULL)
    	{
    	printf(" %d,",t->data);
    	t=t->next;
        }
    }
}
void deletenode()
{
	struct node  *del;
	if(start==NULL)
	printf("list is empty");
	else
	{
		del=start;
	//	while(temp->next!=NULL)
		start=start->next;
		//del=temp;
		free(del);
		
	}
}
int enter()
{
	int i;
	printf("\n enter choice ");
	scanf("%d",&i);
	return(i);
}

int main()
{
	
	while(1)
	{
	switch(enter())
	
	{
		case 1:
			insertnode();
			break;
		case 2:
			trav();
			break;
		case 3:
		    deletenode();
			break;
		case 0:
			exit(0);
		default:
			printf("does not exist");
			
	}
    }

}

