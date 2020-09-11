#include<bits/stdc++.h>
using namespace std;

//do space and time complexity analysis
//i have written brute force code but check out how brute for code is written in this gfg article and compare how you write from below link
//also check optimized code from below link
//https://www.geeksforgeeks.org/longest-palindrome-substring-set-1/
bool isPalindrome(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]){
            return false;
        }
    }

    return true;
}

string maxSizePalStrUtil(string mainStr,int si,int ei){
    string s=mainStr.substr(si,ei-si+1);
    string ans1=s,ans2=s;
    if(si>0&&ei<mainStr.size()-1){
        string s1=mainStr[si-1]+s+mainStr[ei+1];
//        cout<<"string formation s1="<<s1<<endl;
        string s2=s+mainStr[ei+1];
//        cout<<"string formation s2="<<s2<<endl;
        if(isPalindrome(s1)){
            ans1=maxSizePalStrUtil(mainStr,si-1,ei+1);
        }
        if(isPalindrome(s2)){
//            cout<<"palindrome test passing string="<<s2<<endl;
            ans2=maxSizePalStrUtil(mainStr,si,ei+1);
        }
        if(ans1.size()>ans2.size()){
//            cout<<"returning string last:"<<ans1<<endl;
            return ans1;
        }else{
            if(ans2.size()>ans1.size()){
//                cout<<"returning string last:"<<ans2<<endl;
                return ans2;
            }
        }
    }else{
        if(ei<mainStr.size()-1){
            string s2=s+mainStr[ei+1];
//            cout<<"string formation s2="<<s2<<endl;

            if(isPalindrome(s2)){
                ans2=maxSizePalStrUtil(mainStr,si,ei+1);
            }
            if(ans2.size()>ans1.size()){
//                cout<<"returning string last:"<<ans2<<endl;
                return ans2;

            }

        }
    }
//    cout<<"returning string last:"<<s<<endl;
    return s;


}

string maxSizePalStr(string str){
    int maxSize=0;

    string ansString(str[0],1);
    for(int i=0;i<str.size();i++){
        string s=maxSizePalStrUtil(str,i,i);
//        cout<<s<<endl;
        if(s.size()>maxSize){
            maxSize=s.size();
            ansString=s;
        }
    }
    return ansString;
}

int main(){
    string str;
    cin>>str;
    cout<<maxSizePalStr(str);
    return 0;
}
