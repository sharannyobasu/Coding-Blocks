#include<iostream>
using namespace std;
void ocin(int *a, int i,int n,int key)
{
	if(i==n)
	{
		return;
	}
	if(a[i]==key)
	{
		cout<<i<<" ";
	}
	ocin(a,i+1,n,key);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i=0;
	int key;
	cin>>key;
	ocin(a,i,n,key);
}
