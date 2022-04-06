class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)return true;
        long long int n = num/2;
        long long int i=1;
        while(i<=n)
        {
           long long int mid = (i+n)/2;
            if(mid*mid==num)return true;
            else if(mid*mid>num)
            {
                n = mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        return false;
    }
};