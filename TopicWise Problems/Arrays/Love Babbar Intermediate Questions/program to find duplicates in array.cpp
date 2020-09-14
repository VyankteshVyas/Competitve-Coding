#include<bits/stdc++.h>
using namespace std;

//make both the program working for zeros too.
//time complexity of both the programs is o(n) and space complexity is o(1).
//lessons learnt are a) how to make a variable negative b)the sizeof array in function will get wrong
void printDupElem(int arr[],int sizeOfArr){
    int i;
    for(i=0;i<sizeOfArr;i++){
        if(arr[abs(arr[i])]>=0){
            arr[abs(arr[i])] = -arr[abs(arr[i])];
//            printElem(arr,sizeOfArr);

        }else{
            cout << abs(arr[i]) << "\n";
        }
    }
}

//printDupElem elements ko multiple times print kar rahah tha.toh apan pprintDupElemOnce once method banayi.
//you can refer to the link given in love babbar pdf
void printElem(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void printDupElemOnce(int arr[],int sizeOfArr){
    for(int i=0;i<sizeOfArr;i++){
        arr[arr[i]%sizeOfArr]=arr[arr[i]%sizeOfArr]+sizeOfArr;
    }
    for(int i=0;i<sizeOfArr;i++){
        if(arr[arr[i]%sizeOfArr]>=2*sizeOfArr){
            cout<<arr[i]%sizeOfArr<<" ";
            arr[arr[i]%sizeOfArr]%=sizeOfArr;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sizeofArr=sizeof(arr)/sizeof(int);
    printDupElemOnce(arr,sizeofArr);
    return 0;
}
