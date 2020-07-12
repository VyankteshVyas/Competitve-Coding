#include<bits/stdc++.h>

using namespace std;

void printSS(string ques,string asf){
    if(ques.empty()){
        cout<<asf<<endl;
        return;
    }
    char ch=ques[0];
    string roq=ques.substr(1,ques.size()-1);
    printSS(roq,asf);
    printSS(roq,asf+ch);

}


int main(){
    printSS("abc","");
	return 0;
}
