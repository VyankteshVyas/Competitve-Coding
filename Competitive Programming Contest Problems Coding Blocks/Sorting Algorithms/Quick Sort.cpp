
#include<bits/stdc++.h>
using namespace std;


int partition(int arr[],int s,int e){
    int i=-1;
    while(i+1<e&&arr[i+1]<arr[e]) i++;

    int j=i;
    while(j+1<e&&arr[j+1]>arr[e]) j++;

    for(int k=j+1;k<=e;k++){
        if(arr[k]<=arr[e]){
            swap(arr[i+1],arr[k]);
            i++;
            j++;
        }else j++;
    }

    return i;
}

void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e) return;

    //recurrsive case
    int p=partition(arr,s,e);

    //left part
    quickSort(arr,s,p-1);
    //right part
    quickSort(arr,p+1,e);
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
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 

    return 0;

}