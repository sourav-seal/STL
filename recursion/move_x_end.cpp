#include <bits/stdc++.h>
using namespace std;
string move(string s)
{
    if(s.length()==0)
        return "";
    string ans;
    if(s[0]!='x')
        ans=s[0]+move(s.substr(1));
    else    
        ans=move(s.substr(1))+s[0];
    
    return ans;
}
int main()
{
    string str,s;
    cin>>str;
    s=move(str);
    cout<<s;
}