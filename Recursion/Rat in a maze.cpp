#include<iostream>
using namespace std;

bool ratinmaze(char maze[10][10], int sol[][10], int i, int j, int m, int n)
{
    if(i==m and j==n)
    {
        sol[m][n]=1;
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    if(i>m || j>n)
    {
        return false;
    }

    if(maze[i][j]=='X')
    {
        return false;
    }
    sol[i][j]=1;

    bool right=ratinmaze(maze, sol, i, j+1, m, n);
    bool down=ratinmaze(maze, sol, i+1, j, m, n);

    sol[i][j]=0;
    if(right || down)
    {
        return true;
    }
    
    return false;
}

int main()
{
    char maze[10][10]={"0000","00X0", "000X","0X00"};
    int soln[10][10]={0};
    int m=4;
    int n=4;
    bool ans = ratinmaze(maze, soln, 0,0,m-1,n-1);
    if(ans==false)
    {
        cout<<"No path";
    }
    return 0;
}
