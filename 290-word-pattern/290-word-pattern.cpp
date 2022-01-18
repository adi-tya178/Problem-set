class Solution {
public:
    vector<string> getword(string s)
    {
          vector<string> v;
        //string t;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                string t;
                while(i<s.length() && s[i]!=' ' )
                {
                    t+=s[i];
                    i++;
                }
                v.push_back(t);
            }
        }
        return v;
    }
    bool wordPattern(string pattern, string s) {
        vector<string> t = getword(s);
        int n = t.size();
        int m = pattern.length();
        if(n!=m)return false;
        
        unordered_map<string,int> m1;
        unordered_map<char,int>m2;
        
        for(int i=0;i<m;i++)
        {
            m2.insert(make_pair(pattern[i],i));
            m1.insert(make_pair(t[i],i));
            
            if(m2[pattern[i]]!=m1[t[i]])return false;
        }
     return true;
    }
};