// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool cmp(Item a,Item b)
    {
       return a.value/(0.0 + a.weight) > b.value/(0.0 + b.weight);
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
     sort(arr, arr+n, cmp);
        double curr_W = W, max_val = 0;
        for(int i=0; i<n; i++){
            if(arr[i].weight<=curr_W){
                max_val += arr[i].value;
                curr_W -= arr[i].weight;
                    if(curr_W == 0)     break;
            }
            else{
                double frac = curr_W/arr[i].weight;
                max_val += arr[i].value * frac;
                curr_W -= arr[i].weight * frac;
                break;
            }
        }
        return max_val;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends