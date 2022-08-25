#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> ans;
void permute(vector<int> &a,int indx){
    int i;
    if(indx==a.size())
    {
        ans.push_back(a);
        return ;
    }
    for(i=indx;i<a.size();i++)
    {
        swap(a[i],a[indx]);
        permute(a,indx+1);
        swap(a[i],a[indx]);
    }

}
int32_t main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
    {
        cin>>i;

    }
    permute(a,0);

    for(auto j:ans)
    {
        for(auto i:j)
            cout<<i<<" ";
        cout<<endl;
    }
}