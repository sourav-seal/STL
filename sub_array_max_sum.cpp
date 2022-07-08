//cumulative array approach
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
    int n,i,j,sum,st=0,end=0,curr,s;
    cin>>n;
    sum=INT_MIN;
    int arr[n],a[n];
    cout<<"Enter "<<n<<"elements of array";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(end=0;end<n;end++)
    {
        a[end]=sum_array(arr,st,end);//creating cumulative sum array to store the sum upto that point from 0.
        sum=max(a[end],sum);
    }
    for(i=0;i<n-1;i++)// to remove elements from start one at a time
    {
        for(st=i+1;st<n;st++)//starting from the next element of cumulative array.
        {
            a[st]=a[st]-arr[i];//eleminating the elements from start and comparing with max
            sum=max(a[st],sum);
        }
    }
    cout<<endl<<"sum: "<<sum;
}
