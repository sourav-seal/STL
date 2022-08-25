#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> ans;
void permute(vector<int> a,vector<vector<int>> &ans,int indx){
    int i;
    if(indx==a.size())
    {
        ans.push_back(a);
        return ;
    }
    for(i=indx;i<a.size();i++)
    {
        if(i !=indx && a[i]==a[indx]){
            continue;
        }
        swap(a[i],a[indx]);
        permute(a,ans,indx+1);
        //swap(a[i],a[indx]);
    }

}
vector<vector<int>> duplicate(vector<int> &nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    permute(nums,ans,0);
    return ans;
}
int32_t main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<vector<int>> ans;
    
    for(auto &i : a)
    {
        cin>>i;

    }
    ans=duplicate(a);

    for(auto j:ans)
    {
        for(auto b:j)
            cout<<b<<" ";
        cout<<endl;
    }
}