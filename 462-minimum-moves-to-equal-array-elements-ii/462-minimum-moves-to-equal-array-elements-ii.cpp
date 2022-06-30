class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int mid = n/2;
        int i=0;
        int j = mid+1;
        
        int count=0;
        while(i<mid && j<n)
        {
            count+=nums[mid] - nums[i];
            count+=nums[j] - nums[mid];
            i++;
            j++;
        }
        if(i<mid)
        {
            count += nums[mid] - nums[i];
        }
        return count;
    }
};