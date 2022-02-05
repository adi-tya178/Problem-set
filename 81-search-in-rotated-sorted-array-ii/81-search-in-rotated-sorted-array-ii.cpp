class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int hi = n-1;
        int lo = 0;
        while(lo<hi)
        {
            int mid = (lo+hi)/2;
            
            if(nums[mid]==target)return true;
            else if(nums[mid]>nums[hi])
            {
                if(nums[mid]>target && nums[lo]<=target)hi = mid-1;
                else
                {
                    lo = mid+1;
                }
            }
            else if(nums[mid]<nums[hi])
            {
                if(nums[mid]<target && nums[hi]>=target)
                {
                    lo = mid+1;
                }
                else
                {
                    hi = mid;
                }
            }
            else
            {
                hi--;
            }
        }
        return nums[lo]==target;
    }
};