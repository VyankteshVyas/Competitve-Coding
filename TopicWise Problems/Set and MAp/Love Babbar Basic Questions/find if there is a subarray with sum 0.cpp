#include<bits/stdc++.h>
using namespace std;

bool subArrayExists(vector<int> &arr){
    unordered_set<int> uset;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==0||uset.find(sum)!=uset.end()){
            return true;
        }
        uset.insert(sum);
    }
    return false;
}

int main(){
    vector<int> arr = { 1, 4, -2, -2, 5, -4, 3 };
    if(subArrayExists(arr)){
        cout<<"yes"<<endl;
    }else cout<<"No";
    return 0;
}

