//arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,beg=0,min,temp,min_pos;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<"elements of array";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        min=arr[beg];
        min_pos=beg;
        for (j=beg;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                min_pos=j;
            }
        }
        //swap
            temp=arr[beg];
            arr[beg]=min;
            arr[min_pos]=temp;
        //
        beg=beg+1;
    }
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<"->";
    }

}