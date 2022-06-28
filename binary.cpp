#include <bits/stdc++.h>
using namespace std;
int rev(int m){
    int b=0,c;
    while(m>0){
        c=m%10;
        b=b*10+c;
        m=m/10;
    }
    return b;
}
string binadd(int a , int b)
{
    int sum=0,carry=0;
    string str;
    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0){
            sum=sum*10+carry;
            carry=0;
        }
        else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0))
        {
            if(carry==1){
                sum=sum*10+0;
                carry=1;
            }
            else{
                sum=sum*10+1;
                carry=0;
            }

        }
        else{
            sum=sum*10+carry;
            carry=1;
        }
        str=to_string(sum)+str;
        a=a/10;b=b/10;
    }
    //cout<<endl<<sum<<endl;

    while(a>0)
    {
        if(carry==1)
        {
            if(a%2==0)
            {
                sum=sum*10+1;
                carry=0;
            }
            else 
            {
                sum=sum*10+0;
                carry=1;
            }
        }
        else
        {
            sum=sum*10+(a%2);
            carry=0;
        }
        str=to_string(sum)+str;
        a=a/10;
    }
    while(b>0)
    {
        if(carry==1)
        {
            if(b%2==0){
                sum=sum*10+1;
                carry=0;
            }
            else 
            {
                sum=sum*10+0;
                carry=1;
            }
        }
        else
        {
            sum=sum*10+(b%2);
            carry=0;
        }
        str=to_string(sum)+str;
        b=b/10;
    }
    if(carry==1){
        sum=sum*10+1;
    }
    //cout<<"hey"<<str<<"ssd";

    return str;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<endl<< binadd(a,b) <<endl;
    return 1;
}
