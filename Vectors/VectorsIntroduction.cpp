#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    vector<int> b(5,10);
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    vector<int> c(b.begin(), b.end());
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    for(auto it=b.begin();it!=b.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<"Break"<<endl;
    for(int x:c)
    {
        cout<<x<<" ";
    }
    cout<<endl<<endl;
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    for(int g:v)
    {
        cout<<g<<", ";
    }
}
