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
int sum_array(int a[],int st,int end)
{
    int i,sum=0;
    for(i=st;i<=end;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int main()
{
    int n,i,j,sum,st,end,curr,s;
    cin>>n;
    cin>>s;
    int arr[n];
    cout<<"Enter "<<n<<"elements of array";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(s>sum_array(arr,0,n-1))
    {
        cout<<"sub array not possible";
    }
    else if(s==sum_array(arr,0,n-1))
    {
        cout<<"start: 1 end: "<<n;
    }
    else 
    {
        st=0;end=0;
        while(end<n)
        {
            sum=sum_array(arr,st,end);
            if(sum>s)
            {
                sum=sum-arr[st];
                st++;
            }
            else if(sum<s)
            {
                end++;
            }
            else 
            {
                st++;
                end++;
                break;
            }
        }
        cout<<"start: "<<st<<" end : "<<end<<endl;
    }
    
}
