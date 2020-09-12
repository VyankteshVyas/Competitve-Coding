#include<bits/stdc++.h>
using namespace std;

//it's time complexity is o(n^2) find space complexity
//also see o(n) solution here : https://www.geeksforgeeks.org/count-pairs-with-given-sum/

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
