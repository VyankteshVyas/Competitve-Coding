#include<bits/stdc++.h>
using namespace std;

//Time complexity : O(n^2) as there are 2 nested loops
//Space complexity : ask from aman
void swapnos(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swapnos(&arr[i],&arr[minIndex]);

    }
}

int main(){
    int arr[]={64, 25, 12, 22, 11};
    int arrsize=sizeof(arr)/sizeof(int);
    selectionSort(arr,arrsize);
    for(int i=0;i<arrsize;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

