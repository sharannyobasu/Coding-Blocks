#include<iostream>
#include<algorithm>
using namespace std;
int linear(int *a, int i,int n,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(a[i]==key)
    {
        return i;
    }
    return linear(a,i+1,n,key);
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
    int key;
    cin>>key;
    int i=0;
    cout<<linear(a,i,n,key);
    
}
