class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        
        int n = arr.size();
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        int ans=sum;
        for(int end=0;end<k;end++)
        {
            sum = sum - arr[k-end-1];
            sum+=arr[n-end-1];
            ans=max(ans,sum);
        }
        return ans;
    }
};