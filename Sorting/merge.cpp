#include <bits/stdc++.h>
using namespace std;
//int *mergesort(int *,int,int);
void merge(int* ,int,int,int);
void mergesort(int arr[],int low,int high)
{
    int mid=(low+high)/2,i;
    if(low<high){
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void merge(int arr[], int low,int mid,int high)
{
    int i,j,k;
    int n1,n2;
    n1=mid-low+1;
    n2=high-mid;
    int a[n1],b[n2];
    for(i=0;i<n1;i++)
    {
        a[i]=arr[low+i];
    }
    for(j=0;j<n2;j++)
    {
        b[j]=arr[low+i+j];
    }
    i=0;j=0;k=low;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        j++;
        k++;
    }

}

int main()
{
    int i,j,n,s,low,high;
    cin>>n;
    int arr[n],c[n];
    low=0;high=n-1;
    cout<<"Enter "<<n<<"elements of array";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,low,high);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    //cout<<"hello";
    return 0;
}
