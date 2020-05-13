#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={1,10,11,18,110};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	int *it=find(arr,arr+n,key);
	int index=it-arr;
	if(index==n)
	{
		cout<<key<<" not present";
	}
	else
	{
		cout<<"Present at index "<<index;
	}
}
