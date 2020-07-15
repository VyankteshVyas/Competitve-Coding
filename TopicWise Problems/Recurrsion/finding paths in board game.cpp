#include<bits/stdc++.h>

using namespace std;

void printpaths(int start,int end,string asf){
    if(start>end) return;

    if(start==end){
        cout<<asf+" "<<endl;
        return;
    }

    for(int dice=1;dice<7;dice++){
        printpaths(start+dice,end,asf+to_string(dice));
    }

}


int main(){
    printpaths(0,10,"");
	return 0;
}
