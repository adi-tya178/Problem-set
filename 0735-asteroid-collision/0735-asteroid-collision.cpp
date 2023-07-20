class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        //st.push(nums[0]);
        for(int i=0;i<n;i++)
        {
            if(st.empty() || nums[i]>=0 )
            {
                st.push(nums[i]);
            }
            else
            {
                
                    //bool flag = true;
                    while(!st.empty() && st.top() > 0 && st.top() < abs(nums[i]))
                    {
                        st.pop();
                    }
                    if(!st.empty() && st.top()==abs(nums[i]))
                    {
                        st.pop();
                    }
                    else
                    {
                        if(st.empty() || st.top() <0)
                        {
                            st.push(nums[i]);
                        }
                    }
                
            }
            
        }
        vector<int> res;
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }

        reverse(res.begin(),res.end());
        return res;
    }
};