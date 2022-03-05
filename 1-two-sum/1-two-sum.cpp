class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           int l=0; 
       int r=nums.size()-1;
        vector<int>ans,vec,res;
        res = nums;
        sort(nums.begin(),nums.end());
       while(l<r){
         int sum = nums[l] + nums[r];
           if(sum==target)
           {
               ans.push_back(nums[l]);
               ans.push_back(nums[r]);
               l++;
               r--;
               break;
           }
           else if(sum>target)
           {
               r--;
           }
           else
           {
               l++;
           }
          
       }
        for(auto x:ans)
        {
            cout<<x<<endl;
        }
        for(int i=0;i<nums.size();i++){
            if(res[i]==ans[0]){
                vec.push_back(i);
            }
            else if (res[i]==ans[1]){
                vec.push_back(i);
            }
           
            
        }
        return vec;
    }
};