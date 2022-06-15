class Solution {
public:
      static bool compare(const string &s1, const string &s2) {
        return s1.length() < s2.length();
    }

   bool issubsequence(string& s1, string& s2)
{
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    
    return i == n;
}
    int longestStrChain(vector<string>& s) {
      sort(s.begin(),s.end(),compare);
        int n = s.size();
        vector<int> dp(n+1,1);
        //memset(dp,1,sizeof(dp));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if((s[j].length()+1 == s[i].length() && issubsequence(s[j],s[i])))
                {
                    dp[i] = max(dp[i],dp[j]+1);
                   
                   
                }
            }
           // cout<<dp[i]<<endl;
        }
        return *max_element(dp.begin(),dp.end());
    }
};