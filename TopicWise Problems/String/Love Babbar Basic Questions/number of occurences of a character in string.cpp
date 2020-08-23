#include<bits/stdc++.h>
using namespace std;


int main(){
    int maxChar=256;
    int charCount[maxChar]={0};
    string str;
    getline(cin,str);
    cin.ignore(0);
    for(int i=0;i<str.size();i++){
        charCount[str[i]]++;
    }
    for(int i=0;i<256;i++){
        if(charCount[i]>0){
            cout<<"Number of Occurrences of "<<char(i)<<" = "<<charCount[i]<<endl;
        }
    }
    return 0;
}
