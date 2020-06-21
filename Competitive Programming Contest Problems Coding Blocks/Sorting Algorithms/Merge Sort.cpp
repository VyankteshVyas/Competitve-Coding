
#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int s,int e){
    int mid=(s+e)/2;
    int i=s,j=mid+1;
    int k=0;
    int temp[e-s+1];

    while(i<=mid&&j<=e){
        if(arr[i]>arr[j]){
            temp[k++]=arr[j++];
        }else temp[k++]=arr[i++];
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }

    //copying all elements to original array
    for(int d=s;d<=e;d++){
        arr[d]=temp[d-s];
    }
}

void mergeSort(int arr[],int s,int e){
    //Base case
    if(s>=e) return ;
    //Follow 3 steps
    //First Divide
    int mid=(s+e)/2;

    //Recursively the arrays from s to mid and mid+1 to e
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    //Merge the two arrays
    merge(arr,s,e);
    
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
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 

    return 0;

}