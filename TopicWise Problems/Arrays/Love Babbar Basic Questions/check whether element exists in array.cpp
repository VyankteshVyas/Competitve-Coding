#include<bits/stdc++.h>
using namespace std;

int main(){
	//n is element value to be checked and m is size of array
    int n,m;
    cin>>n;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        if(arr[i]==n){
            cout<<"true";
            return 0;
        }
    }
    cout<<"false";
    return 0;
}
