#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[1000];
	int max=0;
	int curr=0;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			curr=0;
			for(int k=i;k<=j;k++)
			{
				curr=curr+a[k];
			}
			if(curr>max)
			{
				max=curr;
			}
		}
		
	}
	cout<<max;
}
