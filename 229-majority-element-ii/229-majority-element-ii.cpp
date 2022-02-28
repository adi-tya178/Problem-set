class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()==0)return {};
        int count1=0,count2=0;
        int num1=0,num2=1;
        
        for(auto x:nums)
        {
            if(x==num1)
            {
                count1++;
            }
            else if(x==num2)
            {
                count2++;
            }
            else if(count1==0)
            {
                num1=x;
                count1=1;
            }
            else if(count2==0)
            {
                num2=x;
                count2=1;
            }
            else
            {
                count1--;
                count2--;
            }
          
        }
          count1=0;
            count2=0;
            for(auto x:nums)
            {
                if(x==num1)count1++;
                else if(x==num2)count2++;
            }
            
            vector<int> v;
            if(count1>nums.size()/3)v.push_back(num1);
            if(count2>nums.size()/3)v.push_back(num2);
            
            return v;
    }
};