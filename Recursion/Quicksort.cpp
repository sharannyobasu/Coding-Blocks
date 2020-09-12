#include<iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
	int pindex=s;
	int pivot=arr[e];
	for(int i=s;i<e;i++)
	{
		if(arr[i]<pivot)
		{
			swap(arr[i], arr[pindex]);
			pindex++;
		}
	}
	swap(arr[e],arr[pindex]);
	return pindex;
}

void quicksort(int *arr, int s, int e)
{
	if(e==0)
	{
		return;
	}
	if(s<e)
	{
		int p=partition(arr, s,e);
		quicksort(arr,s,p-1);
		quicksort(arr,p+1,e);
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
