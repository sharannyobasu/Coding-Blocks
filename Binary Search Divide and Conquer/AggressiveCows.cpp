#include<iostream>
#include<algorithm>
using namespace std;
bool canplacecows(int stalls[], int n,int cows,int mid)
{
    int lastcow=stalls[0];
    int i,count=1;
    for(i=0;i<n;i++)
    {
        if(stalls[i]-lastcow>=mid)
        {
            lastcow=stalls[i];
            count++;
            if(count==cows)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n,cows,s,e;
    cin>>n;
    int stalls[n];
    for(int i=0;i<n;i++)
    {
    
        cin>>stalls[i];
    }
    cin>>cows;
    s=0;
    e=n-1;
    int ans;
    while(s<=e)
    {
        int mid=(s+e)/2;
        bool cowsrakhpaye(canplacecows(stalls,n,cows,mid));
        if(cowsrakhpaye)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    cout<<ans<<endl;
}
