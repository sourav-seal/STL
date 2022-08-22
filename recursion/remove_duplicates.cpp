#include <bits/stdc++.h>
using namespace std;
string duplicates(string s)
{
    if(s.length()==0)
        return "";
    char c=s[0];
    string ans=duplicates(s.substr(1));
    if(c==ans[0])
    {
        return ans;
    }
    return c+ans;
}
int main()
{
    string str,s;
    cin>>str;
    s=duplicates(str);
    cout<<s;
}