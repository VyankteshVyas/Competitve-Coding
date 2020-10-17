#include<bits/stdc++.h>
using namespace std;

void generateBinaryString(string s,int i){
    if(i==s.size()){
        cout<<s<<endl;
        return;
    }
    if(i>0){
        if(s[i-1]!='1'){
            string temp=s;
            temp[i]='1';
            generateBinaryString(s,i+1);
            generateBinaryString(temp,i+1);
        }else{
            generateBinaryString(s,i+1);
        }
    }else{
        string temp=s;
            temp[i]='1';
            generateBinaryString(s,i+1);
            generateBinaryString(temp,i+1);
    }
}

int main(){
    int k;
    cin>>k;
    string s(k,'0');
    generateBinaryString(s,0);
    return 0;
}
