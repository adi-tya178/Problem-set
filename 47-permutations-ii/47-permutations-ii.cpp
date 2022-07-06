class Solution {
public:
    void helper(vector<int> &nums,int ind,vector<vector<int>> &res){
        if(ind == nums.size())
        {
            res.push_back(nums);
            return ;
        }
        unordered_set<int> st;
        for(int i=ind;i<nums.size();i++)
        {
            if(st.find(nums[i])==st.end())
            {
                swap(nums[i],nums[ind]);
                helper(nums,ind+1,res);
                swap(nums[i],nums[ind]);
                st.insert(nums[i]);
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        
        helper(nums,0,res);
        return res;
    }
};