#include<iostream>
#include<algorithm>
using namespace std;
int f(int n)
{
    if(n==0 or n==1)
    {
        return n;
    }
    int f1=f(n-1);
    int f2=f(n-2);
    return f1+f2;

}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);
}
