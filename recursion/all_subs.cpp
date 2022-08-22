#include <bits/stdc++.h>
using namespace std;
void move(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<",";
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);//rest of the string(ros)
    move(ros,ans);
    move(ros,ans+ch);  
}
int main()
{
    string str,s;
    cin>>str;
    move(str,"");
    //cout<<s;
}