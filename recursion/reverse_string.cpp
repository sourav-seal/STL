#include <bits/stdc++.h>
using namespace std;
void reverse(string str)
{
    if(str.length()==0)
    {
        return;
    }
    reverse(str.substr(1));
    cout<<str[0];
}
int main()
{
    string str;
    getline(cin,str);
    reverse(str);

}