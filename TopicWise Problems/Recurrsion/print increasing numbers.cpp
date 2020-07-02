#include<bits/stdc++.h>

using namespace std;




void printIncr(int n){
    if(n==0) return;
    printIncr(n-1);
    cout<<n<<" ";
}

int main(){
    printIncr(5);
	return 0;
}
