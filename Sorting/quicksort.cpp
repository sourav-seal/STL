#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int r)
{
    int i,j,pivot;
    i=l-1;
    pivot=arr[r];
    for(j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
void Quicksort(int arr[],int l,int r)
{
    if(l<r){
    int pivot=partition(arr,l,r);
    Quicksort(arr,l,pivot-1);
    Quicksort(arr,pivot+1,r);
    }
}
int32_t main()
{
    int arr[5]={5,2,1,3,4};
    Quicksort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}