#include<bits/stdc++.h>

using namespace std;

int countpathslider(int n){
    int s[6]; //s for slider
    s[0]=1; //s[0] = s[n]
    s[1]=s[2]=s[3]=s[4]=s[5]=0;
    for(int nos=1;nos<=n;nos++){
        int nv=s[0]+s[1]+s[2]+s[3]+s[4]+s[5];
        s[5]=s[4];
        s[4]=s[3];
        s[3]=s[2];
        s[2]=s[1];
        s[1]=s[0];
        s[0]=nv;
    }
    return s[0];

}
//this is faster way even more than fibonacci to memorization and tabulization

int main(){
    cout<<countpathslider(30);
	return 0;
}
