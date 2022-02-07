class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            if(m.find(t[i])!=m.end())
            {
                m[t[i]]--;
                if(m[t[i]]==0)
                {
                    m.erase(t[i]);
                }
            }
            else
            {
                return t[i];
            }
        }
        char ans;
       for(auto x:m)
       {
           ans = x.first;
       }
        
        return ans;
    }
};