class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        int maxlen = 0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)sum-=1;
            else
            {
                sum+=1;
            }
            if(sum==0)maxlen=i+1;
            if(m.find(sum)!=m.end())maxlen = max(maxlen,i-m[sum]);
            if(m.find(sum)==m.end())m[sum]=i;
        }
        return maxlen;
    }
};