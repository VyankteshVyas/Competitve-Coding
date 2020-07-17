#include<bits/stdc++.h>

using namespace std;


int cps(string str){
    vector<vector<bool>> strg;
    for(int i=0;i<str.size();i++){
        vector<bool> temp(str.size(),false);
        strg.push_back(temp);
    }

    int coun=0;
    for(int diag=0;diag<str.size();diag++){
        int si=0;
        int ei=diag;
        while(ei<str.size()){
            if(diag==0){
                strg[si][ei]=true;
            }else{
                if(diag==1){
                    if(str[si]==str[ei]){
                        strg[si][ei]=true;
                    }
                }else{
                    if(str[si]==str[ei]&&strg[si+1][ei-1]==true){
                        strg[si][ei]=true;
                    }
                }
            }
            if(strg[si][ei]==true) coun++;
            ei++;
            si++;

        }
    }
    return coun;
}

int main(){
    cout<<cps("abccbc")<<endl;
	return 0;
}


