
#include<bits/stdc++.h>
using namespace std;


    //Selection sort works like find min element in working array and swap it with 
    //starting element of working array.
    //Ex : [5,4,1,3,2]->{1}[4,5,3,2]->{1,2}[5,3,4]->{1,2,3}[5,4]->{1,2,3,4}[5]->{1,2,3,4,5}   

void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minIndex]) minIndex=j;
        }
        swap(arr[i],arr[minIndex]);
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
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 

    return 0;

}