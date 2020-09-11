#include<bits/stdc++.h>
using namespace std;

//it's time complexity is o(n) where n is size of string s3 
//check spade complexity
//also check out these 2 questions : https://www.geeksforgeeks.org/find-if-a-string-is-interleaved-of-two-other-strings-dp-33/
//https://www.geeksforgeeks.org/print-all-interleavings-of-given-two-strings/

bool validShuffle(string s1,string s2,string s3){
    int  i=0,j=0,k=0;
    if(s1.size()+s2.size()==s3.size()){
        for(k;k<s3.size();k++){
            if(i<s1.size()&&s3[k]==s1[i]){
                i++;
            }else{
                if(j<s2.size()&&s3[k]==s2[j]){
                    j++;
                }else{
                    return false;
                }
            }
        }
    }else{
         return false;
    }
    return true;
}

int main(){
    string str1,str2,str3;
    cin>>str1;
    cin>>str2;
    cin>>str3;
    if(validShuffle(str1,str2,str3)){
        cout<<"yes"<<endl;
    }else cout<<"no"<<endl;

    return 0;
}
