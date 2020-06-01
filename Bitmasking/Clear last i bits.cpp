#include <iostream>
using namespace std;
int clearbits(int n, int i)
{
    int t=i+1;
    int mask=(1<<t);
    int ans=n&mask;
    return ans;
}
int main() {
int n;
cin>>n;
int i;
cin>>i;
cout<<clearbits(n,i);
  
}
