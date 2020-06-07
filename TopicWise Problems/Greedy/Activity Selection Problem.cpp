#include<bits/stdc++.h>
using namespace std;

//A job has a start and a finish time
struct Activity{
	int start,finish;
};

bool comparator(Activity x,Activity y){
	return (x.finish<y.finish);
}
void printMaxActivities(Activity arr[],int n){
	sort(arr,arr+n,comparator);
	cout<<"("<<arr[0].start<<","<<arr[0].finish<<") ";
	int finish=arr[0].finish;
	for(int j=1;j<n;j++){
		if(arr[j].start>=finish){
			cout<<"("<<arr[j].start<<","<<arr[j].finish<<") ";
			finish=arr[j].finish;
		}
	}

}

int main(){
	Activity arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
	int n=sizeof(arr)/sizeof(arr[0]);
	printMaxActivities(arr,n);
	return 0;
}
