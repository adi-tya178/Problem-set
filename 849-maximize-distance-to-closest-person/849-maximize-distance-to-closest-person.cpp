class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size(),last=-1,maxi=1;
        
        for(int i=0;i<n;i++)
        {
            if(seats[i]==1)
            {
                maxi = last<0?i:max(maxi,(i-last)/2);
                last=i;
            }
        }
        
        maxi = max(maxi,n-last-1);
        return maxi;
    }
};