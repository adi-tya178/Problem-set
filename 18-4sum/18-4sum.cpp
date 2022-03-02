class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int a=0;a<n;a++)
        {
            for(int b=a+1;b<n-1;b++)
            {
                int c = b+1;
                int d = n-1;
                while(c<d)
                {
                   long long sum = (long long )nums[a] + nums[b] + nums[c] + nums[d];
                    
                    if(sum==target)
                    {
                        vector<int> temp = {nums[a],nums[b],nums[c],nums[d]};
                        s.insert(temp);
                        d--;
                        c++;
                    }
                    else if(sum>target)
                    {
                        d--;
                    }
                    else
                    {
                        c++;
                    }
                }
            }
        }
       vector<vector<int>> ans;
        for(auto x:s)
        {
            ans.push_back(x);
        }
        
        return ans;
        
    }
};