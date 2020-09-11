#include<bits/stdc++.h>
using namespace std;

//it's time complexity is o(n) and space complexity is o(1)
void rotateArray(int arr[],int arrSize){
    int temp=arr[0];
    for(int i=1;i<arrSize;i++){
        int temp1=arr[i];
        arr[i]=temp;
        temp=temp1;
    }
    arr[0]=temp;
}

int main(){
    int arr[]={1,2,3,4,5};
    rotateArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
