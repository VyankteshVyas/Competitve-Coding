#include<bits/stdc++.h>
using namespace std;

//leaned from here : https://www.youtube.com/watch?v=8isAsDxcXPo
int quickSortPartition(int arr[],int startIndex,int endIndex){
    int i=startIndex-1;
    int j=startIndex;
    for(j;j<endIndex;j++){
        if(arr[j]<=arr[endIndex]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[endIndex]);
    return i+1;

}
void quicksort(int arr[],int startIndex,int endIndex){
    if(startIndex>=endIndex){
        return;
    }

    int partitionElementIndex=quickSortPartition(arr,startIndex,endIndex);
    quicksort(arr,startIndex,partitionElementIndex-1);
    quicksort(arr,partitionElementIndex+1,endIndex);
}

int main(){
    int arr[]={2,1,5,6,7,5,8};
    int sizeOfArr=sizeof(arr)/sizeof(int);
    quicksort(arr,0,sizeOfArr-1);
    for(int i=0;i<sizeOfArr;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
