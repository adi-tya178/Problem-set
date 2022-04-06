class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        //sort(arr2.begin(),arr2.end());
        int ans= arr1.size() , n =arr2.size();
        for(int i=0;i<arr1.size();i++)
        {
           int j=0;
            while(j<arr2.size())
            {
                if(abs(arr1[i]-arr2[j])<=d)
                {
                    ans--;
                    break;
                }
                j++;
            }
            
        }
        return ans;
    }
};