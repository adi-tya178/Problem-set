class Solution {
public:
    void helper(int ind,vector<int> &nums,vector<int> &temp,vector<vector<int>> &ans)
    {
        if(ind == nums.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[i],nums[ind]);
            temp = nums;
            helper(ind+1,nums,temp,ans);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        helper(0,nums,temp,ans);
        return ans;
    }
};