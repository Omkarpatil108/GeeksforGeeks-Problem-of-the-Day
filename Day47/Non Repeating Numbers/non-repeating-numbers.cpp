//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> ans;
        int n = nums.size();
        int max = *max_element(nums.begin(),nums.end());
        vector<int> arr(max+1,0);
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        n = arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]==1)
                ans.push_back(i);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends