#include<bits/stdc++.h>

using namespace std;




void disarr(int arr[],int n){
    if(n==-1) return;
    disarr(arr,n-1);
    cout<<arr[n]<<" ";
}

int main(){
    int arr[5]={12,9,13,7,6};
    disarr(arr,4);
	return 0;
}
