//cumulative array approach
#include <bits/stdc++.h>
using namespace std;
int kadenes(int arr[],int n)
{
    int i,j=0,sum,curr=0,s;
    sum=INT_MIN;s=INT_MIN;
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
    return sum;
    else 
    return s;
}
int main()
{
    int n,i,j=0,wrapsum,nonwrapsum,curr=0,sum;
    cin>>n;
    sum=0;
    int arr[n];
    cout<<"Enter "<<n<<"elements of array";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    nonwrapsum=kadenes(arr,n);
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        arr[i]=-1*arr[i];
    }
    //wrapsum=kadenes(arr,n);
    wrapsum=sum+kadenes(arr,n);
    curr=max(wrapsum,nonwrapsum);
    cout<<"circular sub array: "<<curr<<endl;
}