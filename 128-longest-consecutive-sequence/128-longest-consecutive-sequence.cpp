class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto x:nums)
        {
            m[x]++;
        }
        int maxlen=0;
        for(auto x:nums)
        { int cnt=1;
            int pre=x-1;
            int nex=x+1;
            while(m.find(nex)!=m.end() && m[nex]>0)
            {
                cnt++;
                m[nex++]--;
            }
            while(m.find(pre)!=m.end() && m[pre]>0)
            {
                cnt++;
                m[pre--]--;
            }
         maxlen = max(cnt,maxlen);
        }
        return maxlen;
    }
};