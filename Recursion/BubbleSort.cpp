#include <iostream>
#include<algorithm>
using namespace std;
void bubble(int a[], int n)
{
    if(n==1)
    {
        return;
    }
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            swap(a[j], a[j+1]);
        }
    }
    bubble(a,n-1);
}

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  bubble(a,n);
  for(int i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }
}
