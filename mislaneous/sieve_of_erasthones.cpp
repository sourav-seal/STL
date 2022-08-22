#include <bits/stdc++.h>
using namespace std;
void erasthones(int n)
{
    int arr[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
            cout<<i<<",";
    }
    cout<<endl;
}
int main()
{
    cout<<"enter a upper limit"<<endl;
    int n;
    cin>>n;
    cout<<"List of Prime Nos :" <<endl;
    erasthones(n);
}