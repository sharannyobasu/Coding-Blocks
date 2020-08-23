#include<iostream>
using namespace std;
void replacePi(a[], int i)
{
    if(a[i]=='\0' or a[i+1]="\0")
    {
        return;
    }
    if(a[i]=='p' and a[i+1]=='i')
    {
        //shifting of array positions and replace with 3.14
        int j=i+2;
        while(a[j]!='\0')
        {
            j++;
        }
        while(j>=i+2)
        {
            a[j+2]=a[j];
            j--;
        }
        //replace with 3.14 and recusrsive call
        a[i]=3;
        a[i+1]='.';
        a[i+2]=1;
        a[i+3]=4;
        replacePi(a,i+4);
    }
    else
    {
        //go to the next position
        replacePi(a,i+1);
    }
    return;
}
int main()
{
    char a[1000];
    cin>>a;
    replacePi(a,0);
    cout<<a<<endl;
}