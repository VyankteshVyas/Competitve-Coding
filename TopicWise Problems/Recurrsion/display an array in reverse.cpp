#include<bits/stdc++.h>

using namespace std;




void disarrrev(int arr[],int n){
    if(n==-1) return;
    cout<<arr[n]<<" ";
    disarrrev(arr,n-1);

}

int main(){
    int arr[5]={12,9,13,7,6};
    disarrrev(arr,4);
	return 0;
}
