#include <bits/stdc++.h>
using namespace std;

int knap(int value[],int weight[],int n,int W)
{
    if(n==0||W==0)
        return 0;
    if(weight[n-1]>W)
    {
        return knap(value,weight,n-1,W);
    }

    return max(knap(value,weight,n-1,(W-weight[n-1]))+value[n],knap(value,weight,n-1,W));
}
int main()
{
    int n,W;
    W=50;n=3;
    int value[3]={100,50,150};
    int weight[3]={10,20,30};
    cout<<knap(value,weight,n,W);
}