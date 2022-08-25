#include <bits/stdc++.h>
using namespace std;

bool isSafe(int **arr,int x,int y,int n)
{
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    else 
        return false;
}
bool ratmaze(int** arr,int x,int y,int n,int** solnarr)
{
    if(x==n-1 && y==n-1)//reached destination
    {
        solnarr[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n))//if rat can move in the given co ordinates
    {
        solnarr[x][y]=1;
        if(ratmaze(arr,x+1,y,n,solnarr))//going right
            return true;
        if(ratmaze(arr,x,y+1,n,solnarr))//going down
            return true;
        solnarr[x][y]=0;//backtracking condition if both path gives false
        return false;
    }
    return false;
}
int main()
{
    int n,i,j;
    cin>>n;
    int **arr=new int*[n];//dynamically allocating memory
    for(i=0;i<n;i++)
        arr[i]=new int[n];
    for(i=0;i<n;i++)
    {
        for (j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int **arrSoln=new int*[n];
    for(i=0;i<n;i++)
    {
        arrSoln[i]=new int[n];
        for(j=0;j<n;j++)
        {
            arrSoln[i][j]=0;
        }
    }
    if(ratmaze(arr,0,0,n,arrSoln))
    {
        for(i=0;i<n;i++)
        {
            for (j = 0; j < n; j++)
            {
                cout<<arrSoln[i][j]<<",";
            }
            cout<<endl;
        }
    }
}