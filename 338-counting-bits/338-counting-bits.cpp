class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        v.push_back(0);
        for(int i=1;i<=n;i++)
        {
            int c=0;
            int t=i;
            while(t)
            {
               
                c++;
                t=t&(t-1);
                
            }
            v.push_back(c);
        }
        return v;
    }
};