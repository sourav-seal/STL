#include <bits/stdc++.h>
using namespace std;

int parining(int n)
{
    if(n==1 || n==0 || n==2)
        return n;
    return parining(n-1)+parining(n-2)*(n-1);
}
int main()
{
    cout<<parining(4);
}