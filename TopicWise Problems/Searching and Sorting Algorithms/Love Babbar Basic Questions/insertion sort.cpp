#include<bits/stdc++.h>
using namespace std;

//insertion sort is not best in terms of performance but it is little more efficient than bubble sort and selection sort in practical scenario
//learned it from here : https://www.youtube.com/watch?v=i-SKeOcBwko
//In best case it's time complexity will be o(n) and in worst case it's time complexity is o(n^2);
void insetionSort(int arr[],int sizeOfArr){
    for(int i=1;i<sizeOfArr;i++){
        int hole=i;
        int value=arr[i];
        while(hole>0&&arr[hole-1]>value){
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=value;
    }
    return ;
}

int main(){
    int arr[]={-1,-3,3,-4,21,91};
    int sizeOfArr=sizeof(arr)/sizeof(int);
    insetionSort(arr,sizeOfArr);
    for(int i=0;i<sizeOfArr;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
