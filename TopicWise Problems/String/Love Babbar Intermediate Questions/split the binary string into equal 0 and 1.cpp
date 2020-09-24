#include <bits/stdc++.h>
using namespace std;
struct count01{
    int c0=0;
    int c1=0;
};
int main() {
    string s;
    cin>>s;
    int cou=0,cou0=0,cou1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            cou0++;
        }else cou1++;

        if(cou0==cou1){
            cou++;
        }

    }
    if(cou0!=cou1){
        cout<<-1;
    }else cout<<cou<<endl;
	return 0;
}

