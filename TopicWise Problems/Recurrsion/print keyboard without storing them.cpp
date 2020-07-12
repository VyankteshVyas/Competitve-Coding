#include<bits/stdc++.h>

using namespace std;

void printComb(string ques,string asf,unordered_map<char,vector<char> > &umap){
    if(ques.empty()){
        cout<<asf<<endl;
        return;
    }
    char ch=ques[0];
    string roq=ques.substr(1,ques.size()-1);
    for(int i=0;i<umap[ch].size();i++){
        printComb(roq,asf+umap[ch][i],umap);
    }

}


int main(){
    unordered_map<char,vector<char> >  umap;
        umap['0']={'.'};
        umap['1']={'a','b','c'};
        umap['2']={'d','e','f'};
        umap['3']={'g','h','i'};
        umap['4']={'j','k','l'};
        umap['8']={'u','v','w','x'};
        umap['5']={'m','n','o'};
        umap['6']={'p','q','r'};
        umap['7']={'s','t'};
        umap['9']={'y','z'};
    string s;
    cin>>s;
    printComb(s,"",umap);
	return 0;
}
