#include <bits/stdc++.h>
using namespace std;
void pi(string str,int i)
{
    if(i>=str.length())
    {
        return;
    }
    if(str[i]=='p' && str[i+1]=='i' && i+1<str.length())
    {
        cout<<"3.14";
        pi(str,i+2);
    }
    else
    { 
        cout<<str[i];
        pi(str,i+1);

    }

}
int main()
{
    string str;
    getline(cin,str);
    pi(str,0);

}