#include <bits/stdc++.h>
using namespace std;
int paths(int n)
{
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    int count=0;
    count=count+paths(n-1)+paths(n-2);
    return count;
}
int main()
{
    cout<<paths(4);
}