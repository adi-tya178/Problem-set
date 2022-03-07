class Solution {
public:
    void helper(vector<int> nums,vector<int> &temp,set<vector<int>> &ans,int i,int target)
    {
        if(!target)
        {
            ans.insert(temp);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            if(nums[j]>target)return ;
            if(j&&nums[j]==nums[j-1]&&j>i)continue;
            temp.push_back(nums[j]);
            helper(nums,temp,ans,j+1,target-nums[j]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        set<vector<int>> ans;
        vector<int> temp;
        helper(candidates,temp,ans,0,target);
        vector<vector<int>> res;
        for(auto x:ans)
        {
            res.push_back(x);
        }
        return res;
    }
};