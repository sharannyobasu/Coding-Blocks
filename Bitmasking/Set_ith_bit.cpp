#include <iostream>
using namespace std;
int setbit(int n,int i)
{
    int mask=(1<<i);
    int ans=n|mask;
    return ans;
}
int main() {
  int n=5;
  int i;
  cin>>i;
  n=setbit(n,i);
  cout<<n;
}
