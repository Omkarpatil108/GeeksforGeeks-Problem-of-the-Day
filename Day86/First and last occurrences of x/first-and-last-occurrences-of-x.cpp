//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int lower = lower_bound(arr, arr + n, x) - arr,
    upper = upper_bound(arr, arr + n, x) - arr;
    
    if(lower >= n || arr[lower] != x || upper - 1 < 0 || arr[upper - 1] != x){
        return {-1, -1};
    }
    
    return {lower, upper - 1};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends