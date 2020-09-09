#include<bits/stdc++.h>
using namespace std;

//check out it's time and space complexity
//check different solutions here : https://www.geeksforgeeks.org/remove-duplicates-from-a-given-string/
string removeDuplicate(string &str){
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    string ans;
    for(int i=0;i<str.size();i++){
        if(arr[str[i]-'a']==0){
            ans+=str[i];
            arr[str[i]-'a']=1;
        }
    }
    return ans;

}

int main(){
    string s;
    cin>>s;
    cout<<removeDuplicate(s);
    return 0;
}
