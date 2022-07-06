class Solution {
public:
    string getPermutation(int n, int k) {
        k--;
        vector<char> nums(n);
        for(int i=0;i<n;i++)
        {
            nums[i] = i+1 + '0';
        }
        vector<int> factorial(n+1);
        factorial[0] = 1;
        for(int i=1;i<=n;i++)
        {
            factorial[i] = factorial[i-1]*i;
        }
        
        string ans;
        for(int i=0;i<n;i++)
        {
            int fact = factorial[n-i-1];
            int ind = (k/fact);
            
            ans.push_back(nums[ind]);
            
            nums.erase(nums.begin()+ind,nums.begin() + ind + 1);
            k = k%fact;
        }
        
        return ans;
    }
};