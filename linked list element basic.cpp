#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
struct node* head;
void insert( int data,int n)
{
	node* temp1=new node();
	temp->data=data;
	temp->next=Null;
	if(n==1){
		temp->next=head;
		head=temp;
		return;
	}
	node* temp2=head;
	for(int i=0;i<n-2;i++)
	{
		temp2=temp2->next;
	}
	temp->next=temp2->next;
	temp2->next=temp1;
};
void print()
{
	node* temp=head;
	while(temp!=Null)
	{
		cout<<temp->data<<"\n";
		temp=temp->next;
	}
}
int main(){
	head=Null;
	insert(2,1);insert(7,2);insert(8,3);insert(6,4);insert(0,4);insert(3,4);print();
}