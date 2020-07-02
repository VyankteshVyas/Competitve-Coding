#include<bits/stdc++.h>

using namespace std;

void bubblesort(int arr[],int start,int last){
    //4) base case for last
    if(last==0) return ;
    //2) since it is base case. so it will return but here it will also begin a new journey in this case
    if(start==last){
        bubblesort(arr,0,last-1);
        //3) now since last is also changing so we have to make a base case for it also.
        return;
    }

    if(arr[start]>arr[start+1]) swap(arr[start],arr[start+1]);

    bubblesort(arr,start+1,last);
    //1) since start variable is changing so we have to create base case for it
}

int main(){
	int arr[]={5,9,23,9,2};
	bubblesort(arr,0,(sizeof(arr)/sizeof(int))-1);
	for(int i=0;i<5;i++) cout<<arr[i]<<" ";

	return 0;
}
