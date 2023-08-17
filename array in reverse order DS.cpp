#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int i,n=5;
	cout<<"enter the elements of array\n";
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl<<"the reverse order is  ";
	for(i=n;i>=0;i--)
	{
		cout<<a[i];
	}
}