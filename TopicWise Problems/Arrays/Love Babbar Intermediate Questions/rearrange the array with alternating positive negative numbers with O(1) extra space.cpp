#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

void rightShiftArray(vector<int> &v,int outOfPlace,int curr){
    int temp=v[curr];
    for(int i=curr;i>outOfPlace;i--){
        v[i]=v[i-1];
    }
    v[outOfPlace]=temp;
}

void rearrangeArray(vector<int> &v){
    int outOfPlace=-1;
    for(int i=0;i<v.size();i++){
        if(outOfPlace>=0){
            if((v[outOfPlace]>=0&&v[i]<0)||(v[outOfPlace]<0&&v[i]>=0)){
                rightShiftArray(v,outOfPlace,i);
                if(i-outOfPlace>=2){
                    outOfPlace+=2;
                }else{
                    outOfPlace=-1;
                }
            }
        }
        if(outOfPlace==-1){
            if((v[i]<0&&i%2!=0)||(v[i]>=0&&i%2==0)){
                outOfPlace=i;
            }
        }
    }
}

int main(){
    vector<int> v={-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    rearrangeArray(v);
    printArray(v);
    return 0;
}
