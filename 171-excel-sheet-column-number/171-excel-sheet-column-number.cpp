class Solution {
public:
    
    int titleToNumber(string columnTitle) {
        int n = columnTitle.length();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int t= columnTitle[i] - 'A' +1;
            ans=ans*26 + t;
        }
        return ans;
    }
};