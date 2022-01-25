class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<=2 || arr[0]>arr[1])return false;
        bool peak=false;
        for(int i=1;i<arr.size();i++)
        {
            if(peak && arr[i]>arr[i-1] || arr[i]==arr[i-1])return false;
            
            peak = arr[i]<arr[i-1];
        }
        return peak;
    }
};