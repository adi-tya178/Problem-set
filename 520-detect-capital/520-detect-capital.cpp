class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        for(auto x:word)
        {
            if(isupper(x))
            {
                count++;
            }
        }
        return !count || count==word.length() || count==1 && isupper(word[0]);
    }
};