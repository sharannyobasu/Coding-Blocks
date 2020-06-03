#include<iostream>
#include<algorithm>
using namespace std;
int clearbits(int n,int i,int j)
{
    int ones=(~0);
    int a=(ones<<(j+1));
    int b=(1<<i)-1;
    int mask=a|b;
    int ans=n&mask;
    return ans;
}
int replace(int num,int i,int m)
{
    int mask=(m<<i);
    int ans=num|mask;
    return ans;
}
int main()
{
    int n=15;
    int i=1;
    int j=3;
    int m=2;
    int num=clearbits(n,i,j);
    cout<<replace(num,i,m);
}
