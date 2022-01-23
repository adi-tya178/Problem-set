class Solution {
public:
    int countElements(vector<int>& nums) {
       int ma = *max_element(nums.begin(),nums.end());
       int mi = *min_element(nums.begin(),nums.end());
       int a = count(nums.begin(),nums.end(),mi);
       int b = count(nums.begin(),nums.end(),ma);
        int ans = nums.size()-a-b;
        return max(0,ans);
    }
};