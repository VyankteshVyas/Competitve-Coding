#include<bits/stdc++.h>
using namespace std;



//learned merge sort from here : https://www.youtube.com/watch?v=yzkzQ7oZwIE
//time complexity analysis : https://www.youtube.com/watch?v=0nlPxaC2lTw
//it's time complexity is o(nlongn)

void mergefn(int arr[],int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;

    int temp[100];

    while(i<=mid&&j<=e){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }else{
            temp[k++]=arr[j++];
        }
    }

    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }

    //we need to copy all elements to original array
    for(int i=s;i<=e;i++){
        arr[i]=temp[i];
    }

}

void mergeSort(int arr[],int s, int e){
    //base case 1 or 0 elements
    if(s>=e){
        return;
    }
    //follow 3 steps
    //Divide

    int mid=(s+e)/2;
    //recurrsively sort 2 arrays
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    mergefn(arr,s,e);

}

int main(){
    int arr[]={ -12, 11, -13, -5, 6, -7, 5, -3, -6};
    int sizeOfArr=sizeof(arr)/sizeof(int);
    mergeSort(arr,0,sizeOfArr-1);
    for(int i=0;i<sizeOfArr;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
