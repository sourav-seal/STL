#include <bits/stdc++.h>
using namespace std;
string binadd(long long a)
{
    string str;int carry=0;long long b=1;
    while(a>0 && b>0)
    {
            if(a%2==0 && b%2==0){
            str=to_string(0+carry)+str;
            carry=0;
        }
        else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0))
        {
            if(carry==1){
                str=to_string(0)+str;
                carry=1;
            }
            else{
                str=to_string(1)+str;
                carry=0;
            }

        }
        else{
            str=to_string(0+carry)+str;
            carry=1;
        }
        a=a/10;b=b/10;
    }
    while(a>0)
    {
        if(carry==1)
        {
            if(a%2==0)
            {
                str=to_string(carry)+str;
                carry=0;
            }
            else 
            {
                str=to_string(0)+str;
                carry=1;
            }
        }
        else
        {
            str=to_string(a%2)+str;
            carry=0;
        }
        a=a/10;
    }
    while(b>0)
    {
        if(carry==1)
        {
            if(b%2==0){
                str=to_string(carry)+str;
                carry=0;
            }
            else 
            {
                str=to_string(0)+str;
                carry=1;
            }
        }
        else
        {
            str=to_string(b%2)+str;
            carry=0;
        }
        b=b/10;
    }
    if(carry==1)
    {
        str=to_string(1)+str;
    }
    return str;
    
    
}

int main(){
    
    int a,i;
    long long r;
    cin>>a;
    string b[a];
    
    for (i=0;i<a;i++){
        cin>>r;
        b[i]=binadd(r) ;
    }
    for (i=0;i<a;i++){
        cout<<b[i]<<endl;
    }
    return 1;
}
