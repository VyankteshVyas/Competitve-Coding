#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cuont0=0,cuont1=0,cuont2=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            cuont0++;
        }else{
            if(arr[i]==1){
                cuont1++;
            }else cuont2++;
        }

    }
    for(int i=0;i<cuont0;i++){
        arr[i]=0;
    }
    for(int i=cuont0;i<cuont0+cuont1;i++){
        arr[i]=1;
    }
    for(int i=cuont0+cuont1;i<cuont2+cuont0+cuont1;i++){
        arr[i]=2;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
