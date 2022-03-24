class Solution {
public:
    int helper(vector<int> &tops,vector<int>& bottoms,set<int> st)
    {
        int n = tops.size();
        int cnt;
        int ans = INT_MAX;
        for(auto x:st)
        {
            cnt=0;
            bool flag = true;
            for(int i=0;i<n;i++)
            {
                if(tops[i]==x)continue;
                else if(bottoms[i]==x)cnt++;
                else
                {
                    flag = false;
                    break;
                   
                }
            }
            if(flag)ans = min(ans,cnt);
        }
       return ans;
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        set<int> s1,s2;
        for(auto x:tops)s1.insert(x);
        for(auto x:bottoms)s2.insert(x);
        
        int op1 = helper(tops,bottoms,s1);
        int op2 = helper(bottoms,tops,s2);
        
        int ans = min(op2,op1);
        
        return ans==INT_MAX?-1:ans;
    }
};