class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        long long mod = 1e9 + 7;
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        int maxih=INT_MIN,maxiv = INT_MIN;
        for(int i=0;i<=hc.size();i++)
        {
            int diff=0;
            if(i==0) diff = hc[i];
            else if(i==hc.size()) diff = h - hc[i-1];
            else
            {
                diff = hc[i] - hc[i-1];
            }
           // cout<<diff<<" ";
            maxih = max(maxih,diff);
        }
        //cout<<endl;
         for(int i=0;i<=vc.size();i++)
        {
            int diff=0;
            if(i==0)diff = vc[i];
            else if(i==vc.size()) diff = w - vc[i-1];
            else
            {
                diff = vc[i] - vc[i-1];
            }
            
            maxiv = max(maxiv,diff);
        }
        return ((maxih%mod) * (maxiv%mod)) % mod;
    }
};