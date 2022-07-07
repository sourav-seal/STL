//sub arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,element,k,sum;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<"elements of array";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+arr[j];
            cout<<"sum : "<<sum<<endl;
        }
    }
}
