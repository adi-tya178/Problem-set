class Solution {
public:
    void helper(vector<int> nums,vector<int> &temp,set<vector<int>> &ans,int i,int n)
    {
        if(i==n)
        {
            ans.insert(temp);
        
            return ;
        }
        temp.push_back(nums[i]);
        helper(nums,temp,ans,i+1,n);
        temp.pop_back();
        helper(nums,temp,ans,i+1,n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
       set<vector<int>> ans;
        int n = nums.size();
        helper(nums,temp,ans,0,n);
        vector<vector<int>> res;
        for(auto x:ans)
        {
            res.push_back(x);
        }
        return res;
    }
};