class Solution {
public:
    int helper(string s,int i,int j,int t)
    {
        unordered_map<char,int> m;
        for(int k=i;k<=j;k++)
        {
            m[s[k]]++;
        }
        for(int k=i;k<=j;k++)
        {
            if(m[s[k]]<t)
            {
                int op1 = helper(s,i,k-1,t);
                int op2 = helper(s,k+1,j,t);
                return max(op1,op2);
            }
        }
        return (j-i+1);
    }
    int longestSubstring(string s, int k) {
        int n = s.length();
        return helper(s,0,n-1,k);
    }
};