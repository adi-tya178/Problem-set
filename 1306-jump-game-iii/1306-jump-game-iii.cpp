class Solution {
public:
   
    bool canReach(vector<int>& arr, int k) {
        int n = arr.size();
        int start = k;
        if(start<0 || start>=n || arr[start]<0)return false;
        if(arr[start]==0)return true;
        arr[start]=-arr[start];
         return canReach(arr,start+arr[start]) || canReach(arr,start-arr[start]);
        
    }
};