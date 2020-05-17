#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
  int arr[]={10,20,30,40,50};
  int n=sizeof(arr)/sizeof(int);
  rotate(arr,arr+n-1,arr+n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
 vector<int> v{10,20,30,40,50};
  rotate(v.begin(),v.begin()+1,v.end());
  for(int i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
  }
  next_permutation(v.begin(),v.end());
  
     next_permutation(v.begin(),v.end());
  cout<<endl;
  for(int x:v)
  {
    cout<<x<<" ";
  }
 
}
