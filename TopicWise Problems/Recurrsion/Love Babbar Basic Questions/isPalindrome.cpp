// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

class Solution
{
	public:
	    bool myFunction(string s,int st,int en){
	        if(st<en){
	            if(s[st]==s[en]&&myFunction(s,st+1,en-1)){
	                return true;
	            }
	            return false;
	        }
	        return true;
	    }
	    
		string is_palindrome(int n)
		{
		    string s=to_string(n);
		    if(myFunction(s,0,s.size()-1)){
		        return "Yes";
		    }
		    return "No";
		}
		
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends