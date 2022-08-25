#include <bits/stdc++.h>
using namespace std;
int paths(int s,int e)
{
    int count=0;
    if(s==e)
    {
        return 1;
    }
    else if(s>e)
    {
        return 0;
    }
    for(int i=1;i<=6;i++)
        count+=paths(s+i,e);
    return count;

}
int main()
{
    cout<<paths(0,3);
}