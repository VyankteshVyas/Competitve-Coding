#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int flag=1;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]){
            flag=0;
            break;
        }
    }

    if(flag){
        cout<<"It is a palindrome";
    }else cout<<"It is not a palindrome";
    return 0;
}
