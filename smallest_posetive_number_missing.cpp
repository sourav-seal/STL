//sub arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,element,k,sum;
    cin>>n;
    int arr[n];
    int K=1e6+2;
    bool a[K]={false};
    cout<<"Enter "<<n<<"elements of array";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>=0)
            a[arr[i]]=true;
    }
    for(i=0;i<K;i++)
    {
        if(a[i]==false)
            break;
    }
    cout<<"Smallest integer missing "<<i;
}
