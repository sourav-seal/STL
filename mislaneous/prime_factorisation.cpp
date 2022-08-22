#include <bits/stdc++.h>
using namespace std;
void erasthones(int n)
{
    int arr[100]={0};
    int n1=n;
    cout<<n1<<endl;
    for(int j=2;j<=n;j++)
    {
        arr[j]=j;
    }
    cout<<n1<<endl;
    for(int i=2;i<=n;i++)
    {
        cout<<n<<endl;
        if(arr[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(arr[j]==j)
                {
                    arr[j]=i;
                }                   
            }
        }
    }
    //cout<<n;
    cout<<n<<endl;
    while(n!=1)
    {
        //cout<<n<<",";
        cout<<arr[n]<<",";
        n=n/arr[n];
        //cout<<n;
    }
    cout<<endl;
} 
int main()
{
    int n;
    cin>>n;
    cout<<"List of Prime Nos :" <<endl;
    //cout<<n;
    erasthones(n);
}