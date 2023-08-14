#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	int rollno;
	char name[20];
	float per;
	struct node* next;
}student;
student *head;

struct node *create(student *h)
{
	int rollno;
	float per;
	char name[20];
	
	printf("enter a rollnumber\n");
	scanf("%d",&rollno);
	printf("enter a name\n");
	scanf("%s",&name);
	printf("enter a per\n");
	scanf("%f",&per);
	if(h==NULL){
	head=(student*)malloc(sizeof(student));
	head->rollno=rollno;
	strcpy(head->name,name);
	head->per=per;
	head->next=NULL;}
	else
	{
		while(h->next!=NULL)
		h=h->next;
		h->next=(student*)malloc(sizeof(student));
		h->next->rollno=rollno;
	    strcpy(head->next->name,name);
    	h->next->per=per;
    	h->next->next=NULL;}		
	}
void display(student *h)
{
	printf("%-10d rollno%-20sname%.2fmarks\n");
    while(h!=NULL){
	printf("%-10d%-20s%.2f\n",h->rollno,h->name,h->per);
	h=h->next;
	}
}
int  main()
{
	int ch;
	while(ch!=4){
	printf("\n1 add value to the list");
	printf("\n2 view list");
	printf("\n4 exit");
	printf("\n1 enter your choice=");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			create(head);break;
		case 2:	display(head);break;
		
	}
}
	
	
}
