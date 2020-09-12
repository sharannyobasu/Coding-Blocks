#include<iostream>
using namespace std;

int add(int *arr, int sum, int i, int n)
{
	int count=0;
	if(i==n)
	{
		return 0;
	}
	if(sum+arr[i]==0)
	{
		return 1;
	}
	count+=add(arr, sum+arr[i], i+1,n);
	count+=add(arr, sum, i+1, n);
	return count;
}



int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if(add(arr, 0,0,n)==0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
	return 0;
}
