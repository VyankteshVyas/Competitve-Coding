class Solution {
public:
    vector<string> comb(unordered_map<char,vector<char> > umap,string str,int start,int n){
        if(str.empty()){
            vector<string> v;
            return v;
        }
        if(start==n-1){
            vector<string> res;
            vector<char> l=umap[str[0]];
            vector<char>::iterator it=l.begin();
            for(it;it!=l.end();it++){
                string temp(1,*it);
                res.push_back(temp);
            }
            return res;
        }
        char c=str[0];
        string str1=str.substr(1,n-start);
        vector<string> subseq=comb(umap,str1,start+1,n);
        int subseqsize=subseq.size();
        vector<string> result;
        vector<char> l=umap[c];
        vector<char>::iterator it=l.begin();
        for(it;it!=l.end();it++){
            for(int j=0;j<subseqsize;j++){
                result.push_back(*it+subseq[j]);
            }
            
        }
        return result;
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,vector<char> >  umap;
        umap['2']={'a','b','c'};
        umap['3']={'d','e','f'};
        umap['4']={'g','h','i'};
        umap['5']={'j','k','l'};
        umap['8']={'t','u','v'};
        umap['6']={'m','n','o'};
        umap['7']={'p','q','r','s'};
        umap['9']={'w','x','y','z'};
        
        // umap.push_back('3',);
        // umap.push_back('4',{'g','h','i'});
        // umap.push_back('5',{'j','k','l'});
        // umap.push_back('6',{'m','n','o'});
        // umap.push_back('7',{'p','q','r','s'});
        // umap.push_back('8',{'t','u','v'});
        // umap.push_back('9',{'w','x','y','z'});
        
        return comb(umap,digits,0,digits.size());
        
        
    }
};