class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long m = abs(n);
        while(m)
        {
             if(m%2)
            {
                  ans = ans * x;
                m = m-1;
           
            }
            else
            {
                   x = x*x;
                m = m/2;
            }
        }
        double res;
        if(n<0)
        {
            res = double(1)/double(ans);
        }
        if(n>0)return ans;
        else
        {
            return res;
        }
        return 0;
    }
};