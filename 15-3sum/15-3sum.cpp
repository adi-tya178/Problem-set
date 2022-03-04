class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>> res;
        for(int i=0;i<n;i++)
        {
            int j = i+1;
            int k = n-1;
            while(j<k)
            {
                vector<int> temp;
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    res.insert(temp);
                    // j++;
                    // k--;
                   
                    while(j<k && nums[j]==temp[1])j++;
                    while(j<k && nums[k]==temp[2])k--;
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
       // return res;
        vector<vector<int>> ans;
        for(auto x:res)
        {
            ans.push_back(x);
        }
        return ans;
    }
};