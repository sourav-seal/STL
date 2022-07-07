//arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,element,k,temp;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<"elements of array";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        k=i-1;
        element=arr[i];
        while(element<arr[k] && k>=0)
        {
            
            arr[k+1]=arr[k];
            arr[k]=element;
            k--;
        }
        
    }
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<"->";
    }

}
