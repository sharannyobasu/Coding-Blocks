#include<iostream>
#include<algorithm>
using namespace std;
int main () {
	int a,b;
	cin>>a;
	cin>>b;
	int ans=0;
	int s=a;
	int e=b;
	while(s<=e)
	{
		int x=(s^e);
		ans=max(ans,x);
		s++;
	}
	cout<<ans;
}
