class Solution {
public:
    void helper(vector<int> nums,vector<int> &temp,int i,vector<vector<int>> &ans,int target)
    {
        if(!target)
        {
            ans.push_back(temp);
            return ;
        }
        for(int j=i;j<nums.size() && target>=nums[j];j++)
        {
            temp.push_back(nums[j]);
            helper(nums,temp,j,ans,target-nums[j]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        vector<vector<int>> ans;
        helper(candidates,temp,0,ans,target);
        return ans;
    }
};