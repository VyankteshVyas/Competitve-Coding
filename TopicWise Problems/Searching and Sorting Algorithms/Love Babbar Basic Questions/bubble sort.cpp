#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v){
    int i,j;
    bool swapped;
    for(int i=0;i<v.size()-1;i++){
        swapped=false;
        for(j=0;j<v.size()-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}

int main(){
    vector<int> v={7,12,9,5,6,8,0,-3};
    bubbleSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
