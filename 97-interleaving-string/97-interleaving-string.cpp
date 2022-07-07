class Solution {
public:
    int dp[101][101];
    bool helper(string s1,string s2,string s3,int ind1, int ind2, int ind3)
    {
        if(ind3>=s3.length())return 1;
        if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
        
        
        if(ind2<s2.length() && ind1<s1.length()&& s1[ind1]==s3[ind3] && s2[ind2] == s3[ind3])
        {
            return dp[ind1][ind2] = helper(s1,s2,s3,ind1+1,ind2,ind3+1) || helper(s1,s2,s3,ind1,ind2+1,ind3+1);
        }
        
        
        else if(ind1<s1.length() && s1[ind1]==s3[ind3])
        {
            return  dp[ind1][ind2] = helper(s1,s2,s3,ind1+1,ind2,ind3+1);
        }
        
        else if(ind2<s2.length() && s2[ind2]==s3[ind3]){
            return  dp[ind1][ind2] = helper(s1,s2,s3,ind1,ind2+1,ind3+1);
        }
        
        
        else
        {
            return dp[ind1][ind2] = 0;
        }
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length() + s2.length() != s3.length())return false;
        memset(dp,-1,sizeof(dp));
        return helper(s1,s2,s3,0,0,0);
        
    }
};