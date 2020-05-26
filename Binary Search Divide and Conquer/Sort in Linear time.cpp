#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,l,mid,h,a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	l=a[0];
	mid=a[0];
	h=a[n-1];
	while(mid<=h)
	{
		if (a[mid]==0)
		{
			swap(a[l], a[mid]);
			mid++;
			l++;
		}
		else if (a[mid]==1)
		{
			mid++;
		}
		else{
			swap(a[mid],a[h]);
			h--;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
