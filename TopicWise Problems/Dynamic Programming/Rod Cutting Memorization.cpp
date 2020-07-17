#include<bits/stdc++.h>

using namespace std;

//iss question mein bhi path ka issue hai

int rctm(vector<int> arr,int rl,vector<int> &qb){

    if(rl==0) return 0;

    if(qb[rl]!=0){
         return qb[rl];
    }
    int msp=arr[rl];
    int left=1;
    int right=rl-1;

    while(left<=right){
        int mspl=rctm(arr,left,qb);
        int mspr=rctm(arr,right,qb);
        if(mspl+mspr> msp){
            msp=mspl+mspr;
        }
        left++;
        right--;
    }
    qb[rl]=msp;

    return msp;
}

int main(){
    vector<int> v={0,3,5,6,15,10,25,12,24};
    vector<int> qb(9,0);
    cout<<rctm(v,8,qb)<<endl;
	return 0;
}


