// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
   void subset_sum(const vector<int> &arr, const int &n, int i, int sum, vector<int> &ans){
        if (i == n){
            ans.push_back(sum);
            return;
        }
        
        //including i
        subset_sum(arr, n, i+1, sum+arr[i], ans);
        
        //not including i
        subset_sum(arr, n, i+1, sum, ans);
    }    
        
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        sort(arr.begin(),arr.end());
        vector<int> ans;
         subset_sum(arr, n, 0, 0, ans);
         return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends