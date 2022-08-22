#include <bits/stdc++.h>
using namespace std;
void hanoi(int n,char a,char b,char c)
{
    if(n==0)
        return;
    hanoi(n-1,a,c,b);
    cout<<"move from "<<a<<" to "<<c<<endl;
    hanoi(n-1,b,a,c);

}
int main()
{
    int n;
    cin>>n;
    hanoi(n,'A','B','C');//(N,SOURCE,HELPER,DESTINATION)

}