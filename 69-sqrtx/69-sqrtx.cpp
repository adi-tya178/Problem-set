class Solution {
public:
    int mySqrt(int x) {
        if(x==0)return 0;
        int i=1;
        int j = x;
        
        while(i<=j)
        {
            long long int mid = i + (j-i)/2;
            
            if(mid > x/mid)
            {
                j = mid-1;
            }
            else
            {
                if((mid+1)>x/(mid+1))return mid;
                else
                {
                    i = mid +1 ;
                }
            }
        }
        
        return i;
    }
};