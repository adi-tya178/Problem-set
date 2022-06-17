class Solution {
public:
   void helper(vector<int> num,int ind,set<vector<int>> &ans,vector<int> &temp)
{
    int n = num.size();
    if(ind == n){
        ans.insert(temp);
        return;
    }
    temp.push_back(num[ind]);
    helper(num,ind+1,ans,temp);
    temp.pop_back();
    helper(num,ind+1,ans,temp);
}
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        sort(arr.begin(),arr.end());
       set<vector<int>> v;
    vector<int> temp;
    helper(arr,0,v,temp);
    vector<vector<int>> ans;
    for(auto x:v)
    {
        ans.push_back(x);
    }
   // sort(ans.begin(),ans.end());
  //  ans.erase(ans.begin());
    return ans;
    }
};