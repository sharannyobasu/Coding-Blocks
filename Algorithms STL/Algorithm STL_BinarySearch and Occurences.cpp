#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
    return a<=b;
}
int main()
{
    int a[]={20,30,40,50,50,50,50,60,70};
    int size=sizeof(a)/sizeof(int);
    int key,index;
    cin>>key;
    bool present=binary_search(a,a+size,key);
    if(present)
    {
        int *lb=lower_bound(a,a+size,key);
        index=lb-a;
        cout<<"Present at : "<<index<<endl;
    }
    else
    {
        cout<<"Absent";
    }
    int *ub=upper_bound(a,a+size,key);
    int occur=ub-a;
    cout<<"Occurences: "<<occur-index;
}
