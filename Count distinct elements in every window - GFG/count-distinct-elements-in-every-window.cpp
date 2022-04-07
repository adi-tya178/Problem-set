// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int B)
    {
        //code here.
        vector<int> ans;
    unordered_map<int,int> m;
    //int n = A.size();
    int i=0,j=0;
    while(j<n)
    {
        m[A[j]]++;
        if(j-i+1==B)
        {
            ans.push_back(m.size());
            m[A[i]]--;
            if(m[A[i]]==0)
            {
                m.erase(A[i]);
            }
            i++;
        }
        j++;
    }
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

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends