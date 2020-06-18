
#include<bits/stdc++.h>
using namespace std;

//template<typename T> or tempelate<class T> are same
template<typename T>

//This search function shows use of Containers
int Search(T arr[],int n,T key){
    for(int p=0;p<n;p++){
        if(arr[p]==key) return p;
    }
    return n;

}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int a[]={1,2,3,4,5};
    int asize=sizeof(a)/sizeof(a[0]);
    int ainp=5;
    int ares=Search(a,asize,ainp);
    ares==asize ? cout<<"Element not exist"<<endl : cout<<"Element index is "<<ares<<endl;

    float b[]={1.1,2.1,3.1,4.1,5.1};
    int bsize=sizeof(b)/sizeof(b[0]);  
    float binp=2.3;//here specially made a fload variable bcoz 1.7 like value is by default considered as double
    //and we have defined search function for float so passing double value or any other data type at float's place will give error.
    int bres=Search(b,bsize,binp);

    bres==bsize ? cout<<"Element not exist" : cout<<"Element index is "<<bres<<endl;


    return 0;

}