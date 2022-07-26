//sub arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,i,j,element,flag=0;
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter elements of array";
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            cin>>arr[i][j];
        cout<<endl;
    }
    cout<<"enter element to find";
    cin>>element;
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            cout<<arr[i][j];
        cout<<endl;
    }
    i=j=0;
    j=col-1;
    while(i<row && j>=0)
    {
        if(element==arr[i][j])
        {
            cout<<"true"<<endl;
            flag=1;
            break;
        }
        else if(element < arr[i][j])
            j --;
        else
            i++;
    }
    if(flag==0)
     cout<<"false"<<endl;
}
    