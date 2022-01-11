class Solution {
public:
    bool ok(int assume,vector<vector<int>> &a)
    {
         for(int i=0;i<a.size();i++){
            if(assume<a[i][1]) return false;
            assume-=a[i][0];
            if(assume<0) return false;
        }
        return true;
    }
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(),tasks.end(),[](const std::vector<int> &a,const std::vector<int> &b)
             {
                 return (a[1]-a[0])>(b[1]-b[0]);
             });
        int lo = 1;
        int hi = 0;
        for(auto x:tasks)
        {
            hi+=x[1];
        }
        while(lo<hi)
        {
            int mid = lo + (hi - lo)/2;
            
            if(ok(mid,tasks))
            {
                hi = mid;
            }
            else
            {
                lo = mid+1;
            }
        }
        return lo;
    }
};