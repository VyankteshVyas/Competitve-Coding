#include<bits/stdc++.h>
using namespace std;



int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        int spaceIndex=i;
        for(spaceIndex;s[spaceIndex]!=' '&&spaceIndex<s.size();spaceIndex++);

        int diff=spaceIndex-i;
        for(int j=0;j<(diff)/2;j++){
            char c=s[i+j];
            s[i+j]=s[spaceIndex-j-1];
            s[spaceIndex-j-1]=c;

        }

        i=spaceIndex;

    }
    cout<<s<<endl;
    return 0;
}
