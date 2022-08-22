#include <bits/stdc++.h>
using namespace std;
void move(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans <<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1); // rest of the string(ros)
    int c = ch;
    move(ros, ans);
    move(ros, ans + ch);
    move(ros, ans+to_string(c));
}
int main()
{
    string str;
    cin >> str;
    move(str, "");
    // cout<<s;
}