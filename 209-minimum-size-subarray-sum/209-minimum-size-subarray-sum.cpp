class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j=0;
        int minres=INT_MAX;
        int currsum=0;
        while(j<n)
        {
             currsum+=nums[j];
                 
                  while(currsum>=k)
                {
                minres=min(minres,j-i+1);
                currsum-=nums[i];
                i++;
                }
            
          
            j++;
        }
       
       
        return minres==INT_MAX?0:minres;
    }
};
// 2->5->6->8->6->10->7->6->9
// 1  2  3  4  3  4   3  2  3

