#include<bits/stdc++.h>

using namespace std;




void Toh(string src,string des,string help,int n){
    if(n==0) return;
    Toh(src,help,des,n-1);
    cout<<"Moving "<<n<<" th disc from "<<src<<" to "<<des<<endl;
    Toh(help,des,src,n-1);
}

int main(){
    Toh("src","des","help",3);
	return 0;
}
