class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxpro=0,currpro=0;
        for(int i=1;i<n;i++)
        {
            currpro = max(0,currpro+=(prices[i]-prices[i-1]));
            maxpro = max(maxpro,currpro);
        }
        return maxpro;
    }
};