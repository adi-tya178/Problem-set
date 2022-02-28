class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int i=0;
        int j=0;
        int n = s.length();
        int maxlen=0;
        while(j<n)
        {
            m[s[j]]++;
             if(m.size()<j-i+1)
            {
               
                    m[s[i]]--;
                    if(m[s[i]]==0)
                    {
                        m.erase(s[i]);
                    }
                    i++;
            }
            if(m.size()==j-i+1)
            {
                maxlen = max(maxlen,j-i+1);
            }
           
            j++;
        }
        return maxlen;
    }
};