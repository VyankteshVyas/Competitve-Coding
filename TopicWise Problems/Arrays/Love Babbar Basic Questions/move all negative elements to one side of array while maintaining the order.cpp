#include<bits/stdc++.h>
using namespace std;

void insetionSortmodified(int arr[],int sizeOfArr){
    for(int i=0;i<sizeOfArr;i++){
        if(arr[i]<0){
            int hole=i;
            int value=arr[i];
            while(hole>0&&arr[hole-1]>=0){
                arr[hole]=arr[hole-1];
                hole--;
            }
            arr[hole]=value;
        }
    }
    return ;
}

//how i did this question:
//there were two ways of doing it. I opened the link of gfg article : https://www.geeksforgeeks.org/rearrange-positive-and-negative-numbers/ and saw
//from the page that the solution can be done in 2 ways first is modifying insertionsort and another is modifying merge sort. so i learned both and 
//then on my own i modified each one of them to obtain solution

//to do : i have to calculate time and space complexity of both of these method on my own and later cross check with that given in the above article.
void mergefn(int arr[],int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;

    int temp[100];

    while(arr[i]<0&&i<=mid){
        temp[k++]=arr[i++];
    }
    while(arr[j]<0&&j<=e){
        temp[k++]=arr[j++];
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
