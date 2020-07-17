#include<bits/stdc++.h>

using namespace std;

//iss question mein bhi path ka issue hai

void rct(vector<int> arr){
    vector<int> strg(arr.size(),0);
    vector<string> path(arr.size(),"");

    strg[0]=0;
    strg[1]=arr[1];
    path[1]="1";
    for(int i=2;i<arr.size();i++){
        strg[i]=arr[i];
        path[i]=i+"";

        int lef=1;
        int righ=i-1;
        while(lef<=righ){
            if(strg[lef]+strg[righ]>strg[i]){
                strg[i]=strg[lef]+strg[righ];
                path[i]=path[lef]+path[righ];
            }
            lef++;
            righ--;
        }
    }
    cout<<strg[arr.size()-1]<<"  path is ->"<<path[arr.size()-1];
}

int main(){
    vector<int> v={0,3,5,6,15,10,25,12,24};
    rct(v);
	return 0;
}


