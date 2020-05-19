#include<iostream>
#include<algorithm>
using namespace std;
float square_root(int n,int p)
{
  float ans=-1;
  int s=0;
  int e=n-1;
  while(s<=e)
  {
    int mid=(s+e)/2;
    if(mid*mid==n)
    {
      return mid;
    }
    else if (mid*mid<n)
    {
      ans=mid;
      s=mid+1;
    }
    else
    {
      e=mid-1;
    }
  }
  float inc=0.1;
  for(int i=0;i<p;i++)
  {
    while(ans*ans<=n)
    {
      ans=ans+inc;
    }
    ans=ans-inc;
    inc=inc/10;
  }


  return ans;
}
int main() {
  int n;
  cin>>n;
  cout<<square_root(n,2);
}
