/*
Problem
Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.
Constraints
1 <= N <= 105
0 <= Ai <= 1010
Example
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements from 2nd position to 4th position is 12.
*/
//sub arrays


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,s,sum=0;
    cin>>n;
    cin>>s;
    int arr[n];
    cout<<"Enter "<<n<<"elements of array";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(j<n && sum+arr[j]<=s)
    {
        sum+=arr[j];
        j++;
    }
    if(sum==s)
    {
        cout<<" Starting pos :"<<i+1<<" End Posn :"<<j;
        return 0;
    }
    i=0;
    while(j<n)
    {
        sum=sum+arr[j];
        while(sum>s)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==s)
        {
            cout<<" Starting pos :"<<i+1<<" End Posn :"<<j+1;
            break;
        }
    }
    return 0;
}