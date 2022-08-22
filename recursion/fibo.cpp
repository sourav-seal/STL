#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==0 || n==1)//base case
        return n;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Fibonacci Series :"<<fibo(n);
}
