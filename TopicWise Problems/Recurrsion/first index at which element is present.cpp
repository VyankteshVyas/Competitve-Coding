#include<bits/stdc++.h>

using namespace std;

int firstindex(int arr[],int currindex,int last,int val){

	if(currindex==last){
        return -1;
	}
	if(arr[currindex]==val) return currindex;
	else return firstindex(arr,currindex+1,last,val);
}

int main(){
	int arr[]={5,9,23,9,2};
	int res=firstindex(arr,0,sizeof(arr)/sizeof(int),17);
	res!=-1 ? cout<<"present at "<<res : cout<<"not present";
	return 0;
}
