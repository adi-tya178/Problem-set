class Solution {
public:
    int minDeletions(string s) {
       vector<int> freq(26);
        for(auto x:s)
        {
            freq[x-'a']++;
        }
        int res = 0;
        sort(freq.begin(),freq.end());
        for(int i=24;i>=0 && freq[i]>0;i--)
        {
            res+=max(0, freq[i] - max(0,freq[i+1]-1));
            freq[i] = min(freq[i],max(0,freq[i+1]-1));
        }
        return res;
    }
};