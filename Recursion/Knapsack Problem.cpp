#include<iostream>
#include<algorithm>
using namespace std;

int knapsack(int *wt, int *price, int n, int c)
{
    if(n==0 ||c ==0)
    {
        return 0;
    }
    if(wt[n-1]<=c)
    {
        return max(price[n-1] + knapsack(wt, price, n-1, c-wt[n-1]), knapsack(wt, price, n-1, c));
    }
    else
    {
        return knapsack(wt, price, n-1, c);
    }
}

int main()
{
    int wt[]={1,2,3,5};
    int prices[]={40,20,30,100};
    int n=sizeof(wt)/sizeof(int);
    int c;
    cin>>c;
    cout<<knapsack(wt, prices, n, c)<<endl;
}
