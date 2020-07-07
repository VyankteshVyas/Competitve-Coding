#include<bits/stdc++.h>

using namespace std;

vector<string> gss(string s,int currind,int lastind){
    char c=s[0];
    vector<string> retsubseq;
    if(currind==lastind){
        retsubseq.push_back(" ");
        return retsubseq;
    }
    string str1=s.substr(1,lastind-currind);
    vector<string> subseq=gss(str1,currind+1,lastind);

    for(string temp: subseq){
        retsubseq.push_back(temp);
        retsubseq.push_back(c+temp);
    }
    return retsubseq;

}

int main(){
    string s;
    cin>>s;
    vector<string> v=gss(s,0,s.size());

    for(string temp:v){
        cout<<temp<<endl;
    }

   // C->A 10,D 50,
   // B->A 20,D 40,
   // D->B 40,C 50,
  //  A->B 20,C 10,D 10,
  //the output of program will be the above 4 comment . If you want that they
  //should be arranged lexographically then you can use map instead of unordered map.

	return 0;
}
