class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n+1);
        
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<=n;i++)
        {
            if(freq[i]>=2)return i;
        }
        
        return -1;
    }
};