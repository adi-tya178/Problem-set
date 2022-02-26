class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxpro=0;
        int currprofit=0;
        for(int i=1;i<n;i++)
        {
            currprofit = max(currprofit+=(prices[i] - prices[i-1]),0);
            maxpro = max(maxpro,currprofit);
        }
        return maxpro;
    }
};