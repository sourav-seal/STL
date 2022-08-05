/*
Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 106
0 <= Ai <= 106
Example
Input:
7
1 5 3 4 3 5 6
Output:
2
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;  
    cin>>n;
    int min1=INT_MAX;
    int a[n];
    cout<<"Enter "<<n<<" elements of array";
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //int K=1e6+2;    
    int b[100002];
    for(i=0;i<100002;i++)
    {
        b[i]=-1;
    }
    //cout<<"1"<<endl;
    for(i=0;i<n;i++)
    {
        if(b[a[i]] != -1)
        {
            min1=min(min1,b[a[i]]);
        }
        else
        {
            b[a[i]]=i;
        }

    }
    if(min1==INT_MAX)
        cout<<"No repeating elements";
    else
        cout<<"ans: " <<min1+1;
    //cout<<"hii";

}