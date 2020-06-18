
#include<bits/stdc++.h>
using namespace std;

//template<class A,class B> is template<class ForwardIterator,class T>
//ForwardIterator is just a name. We have chosen it for our relativity.We could have even used a insted
template<typename ForwardIterator,typename T>

//Your algo is more generic. It can work on diff containers also. Instead of list you can pass
//more sequence containers. This is how stl people have written it.
ForwardIterator Search(ForwardIterator start,ForwardIterator end,T key){
    while(start!=end){
        if(*start==key) return start;

        start++;
    }
    return end;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    list<int> l;
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);

    auto it=Search(l.begin(),l.end(),7);
    if(it==l.end()) cout<<"not found"<<endl;
    else cout<<*it<<endl;
    //here l.begin() is an iterator which actually is list<int>::iterator
    //and since we are passing this as argument equals ForwardIterator in Search 
    //therefore Forward iterator equals list<int>::iterator


    return 0;

}