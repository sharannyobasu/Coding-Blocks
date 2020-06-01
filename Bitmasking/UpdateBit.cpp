#include <iostream>
using namespace std;
int updatebit(int n,int i,int v)
{
    int mask=~(1<<i);
    int cl=n&mask;
    n=cl|(v<<i);
    return n;
}
int main() {
int n=1;
int i;
cin>>i;
int v;
cin>>v;
cout<<updatebit(n,i,v);
}
