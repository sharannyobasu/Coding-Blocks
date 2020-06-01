#include<iostream>
using namespace std;
int clearbit(int n,int i)
{
    int mask=~(1<<i);
    int ans=(n&mask);
    return ans;
}
int main()
{
    int n=14;
    int i;
    cin>>i;
    cout<<clearbit(n,i)<<endl;
}
