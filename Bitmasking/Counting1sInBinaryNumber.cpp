#include<iostream>
#include<algorithm>
using namespace std;
int setcount1(int n) //method 1
{
    int ans=0;
    while(n>0)
    {
        ans+=n&1;
        n=(n>>1);
    }
    return ans;
}
int setcount2(int n) //method 2
{
    int ans=0;
    while(n>0)
    {
        n=(n&(n-1));
        ans++;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<setcount2(n)<<endl;
    cout<<__builtin_popcount(n)<<endl; //method 3
}
