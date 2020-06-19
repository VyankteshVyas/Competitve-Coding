
#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    return a>b;
}

void bubbleSort(int a[],int n,bool (&cmp)(int a,int b)){
    //N-1 large elements to the end
    for(int itr=1;itr<=n-1;itr++){
        //Pairwise swapping in the unsorted of the array
        for(int j=0;j<=(n-itr-1);j++){
            //Instead of writting this:
            // if(a[j]>a[j+1]){
            //     swap(a[j],a[j+1]);
            // }
            //we write this:
            if(cmp(a[j],a[j+1])){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int n,key;
    cin>>n;

    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sort an array using sort function
    //starting point is included and ending point is excluded.
    bubbleSort(a,n,compare); 
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;

    //To sort elements in decreasing order we need to define compare function.
    //Passing function as a parameter to sort function
    
    
    
    

    return 0;

}