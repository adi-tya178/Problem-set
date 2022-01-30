class Solution {
public:
    void rotate(vector<int>& nums, int k) {
          if(nums.size()<k)
        {
            while(k>nums.size())
            {
                k=k-nums.size();
            }
        }
        vector<int> res;
        int j=nums.size()-k;
        int flag=k;
        while(k--)
        {
           res.push_back(nums[j]);
            j++;
        }
        int i=0;
        int temp=nums.size()-flag;
        while(temp--)
        {
           res.push_back(nums[i]);
            i++;
        }
        nums=res;
    }
};