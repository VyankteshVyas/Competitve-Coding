
#include<bits/stdc++.h>
using namespace std;


    
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int e=arr[i];
        while(j>=0&&arr[j]>e){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=e;
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
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 

    return 0;

}