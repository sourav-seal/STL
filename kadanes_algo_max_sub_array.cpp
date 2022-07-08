//cumulative array approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,sum,curr=0,s;
    cin>>n;
    sum=INT_MIN;s=INT_MIN;
    int arr[n];
    cout<<"Enter "<<n<<"elements of array";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        curr=curr+arr[i];
        if(curr<0)
        {
            curr=0;
            s=max(s,arr[i]);
        }
        else
        {
            j=1;
        }
        sum=max(curr,sum);
    }
    if(j==1)
    cout<<"Maximum Sum : " <<sum;
    else 
    cout<<"Maximum Sum : " <<s;
}