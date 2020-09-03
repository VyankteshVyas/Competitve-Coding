#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,cuont=0;
    cin>>m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==m){
            cuont++;
        }
    }
    cout<<cuont;
    return 0;
}
