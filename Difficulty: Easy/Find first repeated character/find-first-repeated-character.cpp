//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends




string firstRepChar(string s)
{
    //code here.
    int n=s.size();
    
    unordered_map<char,int>mp;
    
    string ans="-1";
    
    for(int i=0;i<n;i++)
    {
        if(mp[s[i]])
        {
         ans=s[i];
         return ans;
        }
         
         mp[s[i]]++;
   }
   
   return ans;
}