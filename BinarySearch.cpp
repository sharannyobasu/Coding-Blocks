#include<iostream>
using namespace std;

int bsearch(int arr[], int n, int x)
{
	int left=0;
	int right=n-1;
	while(left<=right){
		int mid=(right+left)/2;
		if(arr[mid]==x)
		{
			return mid;
		}
		else if(arr[mid]>x)
		{
			right=mid-1;
			
		}
		else
		{
			left=mid+1;
			
		}
	}
}

int main()
{
	int num,myarr[1000],output,i,j,temp,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>myarr[i];
	}
	for (i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if (myarr[i]>myarr[j])
			{
				temp=myarr[i];
				myarr[i]=myarr[j];
				myarr[j]=temp;
			}
		}
	}
	cout<<"The sorted array is : "<<endl;
	for (i=0;i<n;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the number that you want to search in the array : "<<endl;
	cin>>num;
	output=bsearch(myarr,n,num);
	if(output==-1)
	{
		cout<<"Not found !"<<endl;
	}
	else
	{
		cout<<"Element found at position : "<<output<<endl;
	}
	return 0;
}
