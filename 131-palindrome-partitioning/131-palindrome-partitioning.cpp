class Solution {
public:
    bool isPalindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i++]!=s[j--])return false;
        }
        return true;
        
    }
    void helper(vector<vector<string>> &ans,vector<string> &temp,string s,int start)
    {
        int n = s.length();
        if(start==n){ans.push_back(temp);
                     return ;}
        else
        {
            for(int i = start;i<n;i++)
            {
                if(isPalindrome(s,start,i))
                {
                    temp.push_back(s.substr(start,i-start+1));
                    helper(ans,temp,s,i+1);
                    temp.pop_back();
                }
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        helper(ans,temp,s,0);
        return ans;
    }
};