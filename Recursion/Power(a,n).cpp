#include<iostream>
#include<algorithm>
using namespace std;
int issorted(int b, int n)
{
    if(n==0)
    {
        return 1;
    }
    return b*issorted(b,n-1);
}
int main()
{
    int b,n;
    cin>>b>>n;
    cout<<issorted(b,n);
}
