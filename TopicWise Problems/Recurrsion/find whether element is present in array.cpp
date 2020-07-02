#include<bits/stdc++.h>

using namespace std;

bool findelem(int arr[],int currindex,int last,int val){
	
	if(currindex==last-1){
        if(arr[currindex]==val) return true;
        else return false;
	}
	return ((arr[currindex]==val)||findelem(arr,currindex+1,last,val));
}

int main(){
	int arr[]={5,12,23,-1,9};
	findelem(arr,0,sizeof(arr)/sizeof(int),-5) ? cout<<"present" : cout<<"not present";
	return 0;
}
