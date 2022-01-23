class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        queue<int> q;
        for(int i=1;i<=9;i++)
        {
            q.push(i);
        }
        while(!q.empty())
        {
            int t = q.front();
            q.pop();
            if(t>=low && t<=high)
            {
                res.push_back(t);
            }
            if(t>high)
            {
                break;
            }
            int temp = t%10;
            if(temp<9)
            {
                q.push(t*10 + temp + 1);
            }
        }
        return res;
    }
};