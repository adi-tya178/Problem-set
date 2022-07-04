class Solution {
public:
    int candy(vector<int>& arr) {
       int n = arr.size();
        
        vector<int> num(n,1);
        
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]<arr[i])
            {
                num[i] = num[i-1] + 1;
            }
        }
        
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>arr[i+1])
            {
                num[i] = max(num[i],num[i+1]+1);
            }
        }
        
        int ans = 0;
        for(auto x:num)
        {
            ans+=x;
        }
        return ans;
    }
};