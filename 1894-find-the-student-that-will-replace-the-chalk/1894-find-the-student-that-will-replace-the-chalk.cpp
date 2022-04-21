class Solution {
public:
    
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
       vector<long long int> pre(n);
        pre[0] = chalk[0];
        for(int i=1;i<n;i++)
        {
            pre[i] = pre[i-1] + chalk[i];
        }
        k%=pre[n-1];
        int start = 0;
        int end = n-1;
        while(start<end)
        {
            int mid = (start+end)/2;
            if(pre[mid]<=k)
            {
                start = mid+1;
            }
            else{
                end = mid;
            }
            
        }
        return start;
    }
};