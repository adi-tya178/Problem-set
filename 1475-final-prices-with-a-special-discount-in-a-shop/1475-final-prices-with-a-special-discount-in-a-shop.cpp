class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> v;
        stack<int> st;
        for(int i=prices.size()-1;i>=0;i--)
        {
            if(st.empty())
            {
                v.push_back(prices[i]);
            }
            else if(!st.empty() && st.top()<=prices[i])
            {
                v.push_back(prices[i]-st.top());
            }
            else
            {
                while(!st.empty() && st.top()>prices[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    v.push_back(prices[i]);
                }
                else
                {
                    v.push_back(prices[i]-st.top());
                }
            }
            st.push(prices[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};