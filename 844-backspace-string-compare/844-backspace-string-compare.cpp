class Solution {
public:
     string real(string &s){
        string result;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#')result+=s[i];
            else if(result.size())result.pop_back();
        }
        return result;
    }
    bool backspaceCompare(string s, string t) {
        return real(s)==real(t);
        
    
    }
};