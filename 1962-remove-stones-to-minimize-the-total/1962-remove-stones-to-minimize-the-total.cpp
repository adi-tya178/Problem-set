class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int,vector<int>> q;
        for(auto x:piles)
        {
            q.push(x);
        }
        while(k--)
        {
            int t = q.top();
            q.pop();
            t = t - floor(double(t/2));
            q.push(t);
        }
        int ans=0;
        while(!q.empty())
        {
            //cout<<q.top()<<endl;
            ans+=q.top();
            q.pop();
        }
        return ans;
    }
};