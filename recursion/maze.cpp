#include <bits/stdc++.h>
using namespace std;
int paths(int s,int e,int s1,int e1)//(0,0)->(3,3)
{
    int count=0;
    if(s==s1-1 && e==e1-1)
        return 1;
    else if(s>=s1||e>=e1)
        return 0;
    count=count+paths(s+1,e,s1,e1)+paths(s,e+1,s1,e1);
    return count;
}
int main()
{
    cout<<paths(0,0,3,3);
}