class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1 && trust.size()==0)return 1;
        unordered_map<int,int> m;
        for(auto x:trust)
        {
            if(m[x[1]]!=-1)m[x[1]]++;
            m[x[0]]=-1;
        }
       for(auto x:m)
       {
           if(x.second==n-1)return x.first;
       }
        return -1;
    }
};