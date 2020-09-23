#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    stack<int> s;
	    string str;
	    cin>>str;
	    for(int i=0;i<str.size();i++){
	        if(str[i]>='0'&&str[i]<='9'){
	            s.push(str[i]-'0');
	        }else{
	            int val1,val2;;
	            val1=s.top();
	            s.pop();
	            val2=s.top();
	            s.pop();
	            if(str[i]=='*'){
	                s.push(val1*val2);
	            }else{
	                if(str[i]=='+'){
	                    s.push(val1+val2);
	                }else{
	                    if(str[i]=='-'){
	                        s.push(val2-val1);
	                    }else{
	                        s.push(val2/val1);
	                    }
	                }
	            }
	        }
	    }
	    cout<<s.top()<<'\n';
	}
	return 0;
}