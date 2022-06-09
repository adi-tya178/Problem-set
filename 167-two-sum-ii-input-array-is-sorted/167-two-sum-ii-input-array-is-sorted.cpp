class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int i=0;
        int j=arr.size()-1;
        vector<int> res;
        while(i<j)
        {
            int sum = arr[i]+arr[j];
            if(sum==target)
            {
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            }
            else if(target<sum)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return res;
    }
};