#include<bits/stdc++.h>
using namespace std;

void replaceElements(int arr[],int sizeOfArr){
    unordered_set<int> uset;
    for(int i=0;i<sizeOfArr;i++){
        if(uset.find(arr[i])==uset.end()){
            uset.insert(arr[i]);
        }else{
            int val=arr[i]+1;
            while(uset.find(val)!=uset.end()){
                val++;
            }
            uset.insert(val);
            arr[i]=val;
        }
    }
}

int main(){
    int arr[]={1, 2, 5, 7, 8, 8, 7};
    int sizeOfArr=sizeof(arr)/sizeof(int);
    replaceElements(arr,sizeOfArr);
    for(int i=0;i<sizeOfArr;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
