class Solution {
public:
    vector<int> nearestSmallestLeft(vector<int> &height)
{
        int n = height.size();
    stack<pair<int,int>> st;
    vector<int> ans(n);
    for(int i=0;i<height.size();i++)
    {
        
        
        while(!st.empty() && st.top().first>=height[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top().second;
        }
        st.push({height[i],i});
    }
        
    return ans;
}
vector<int> nearestSmallestRight(vector<int> &height)
{
    
    int n = height.size();
    stack<pair<int,int>> st;
    vector<int> ans(n);
    for(int i=height.size()-1;i>=0;i--)
    {
        while(!st.empty() && st.top().first>=height[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            ans[i] = n;
        }
        else
        {
            ans[i] = st.top().second;
        }
        st.push({height[i],i});
    }
     // reverse(ans.begin(),ans.end());
    
    return ans;
}
    int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
        if(n==1)return heights[0];
    vector<int> left = nearestSmallestLeft(heights);
    vector<int> right = nearestSmallestRight(heights);
    for(auto x:right)
    {
        cout<<x<<endl;
    }
    vector<int> width(n);
    for(int i=0;i<n;i++)
    {
        //cout<<right[i]<<" "<<left[i]<<endl;
        width[i] =right[i]-left[i]-1;
        //cout<<width[i]<<endl;
    }
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        int val = width[i]*heights[i];
        ans = max(ans,val);
    }
  
    return ans;
        
    }
};