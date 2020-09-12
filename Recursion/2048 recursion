#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char words[][10]={"zero","one","two","three","four","five","six","seven","eigth","nine"};
void printspel(int n)
{
if(n==0)
{
    return;
}
printspel(n/10);
int digit=n%10;
cout<<words[digit]<<" ";
return;
}
int main()
{
    int n;
    cin>>n;
    printspel(n);
}
