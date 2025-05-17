//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumSumSubarray(vector<int>& nums, int k) {
        // code here
        int maxSum=INT_MIN, sum=0;
        
        int i=0, j=0;
        while(j<nums.size()){
            sum+=nums[j];
            if(j-i+1< k){
                j++;
            }
            else if(j-i+1==k){
                maxSum= max(sum, maxSum);
                sum-=nums[i];
                i++;
                j++;
            }
            
        }
        return maxSum;
        
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends