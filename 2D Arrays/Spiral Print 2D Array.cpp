	#include<iostream>
	using namespace std;
	void spiral(int a[1000][1000], int m,int n)
	{
		int startrow=0;
		int endrow=m-1;
		int startcol=0;
		int endcol=n-1;
		int i;
		while(startrow<=endrow && startcol<=endcol)
		{
			for(i=startcol;i<=endcol;i++)
			{
				cout<<a[startrow][i]<<"  ";
			}
			startrow++;
			for (i=startrow;i<=endrow;i++)
			{
				cout<<a[i][endcol]<<"  ";
			}
			endcol--;
			if(startrow<=endrow){
			
			for(i=endcol;i>=startcol;i--)
			{
				cout<<a[endrow][i]<<"  ";
			}
		}
			endrow--;
			if(endcol>=startcol)
			for(i=endrow;i>=startrow;i--)
			{
				cout<<a[i][startcol]<<"  ";
			}
			startcol++;
		}
	}
	int main()
	{
		
		int r,c, a[1000][1000],i,j;
		cin>>r>>c;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cin>>a[i][j];
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<endl;
		}
		spiral(a,r,c);
		return 0;
	}
