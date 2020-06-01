#include <iostream>
using namespace std;
int getbit(int n,int i)
{
    int mask=(1<<i);
    int bit=(n&mask)>0?1:0;
    return bit;
}
int main() {
   int n=10;
   int i;
   cin>>i;
   cout<<getbit(n,i)<<endl;
}
