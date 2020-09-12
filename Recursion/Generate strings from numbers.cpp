#include<iostream>
using namespace std;

void gen(char *in, char *out, int i, int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    int digit=in[i]- '0';
    char ch=digit + 'A' -1;
    out[j]=ch;

    gen(in, out, i+1, j+1);

    if(in[i+1]!='\0')
    {
        int sec=in[i+1]- '0';
        int no=digit*10 + sec;
        if(no<=26)
        {
            ch=no+'A'-1;
            out[j]=ch;
            gen(in, out, i+2, j+1);
        }
    }
    return;
}


int main()
{
    char arr[100];
    cin>>arr;
    char out[100];
    gen(arr, out, 0,0);
    return 0;
}
