
#include<bits/stdc++.h>
using namespace std;


    //Bubble sort works like pushing maximum element to currend with pairwise swapping
    //Ex : [5,4,1,3,2]->[4,5,1,3,2]->[4,1,5,3,2]->[4,1,3,5,2]->[4,1,3,2,5]
    //Now the array becomes [4,1,3,2]{5};

void bubbleSort(int arr[],int n){
    for(int sortind=n-1;sortind>0;sortind--){
        for(int i=0;i<sortind;i++){
            if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
        }
    }
    
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 

    return 0;

}