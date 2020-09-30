#include <bits/stdc++.h>
using namespace std;

stack<char> st;

void insertAtBottom(char c){
    if(st.size()==0){
        st.push(c);
    }else{
        char x=st.top();
        st.pop();
        insertAtBottom(c);
        st.push(x);
    }
}

void reverseStack(){
    if(st.size()>0){
        char x=st.top();
        st.pop();
        reverseStack();
        insertAtBottom(x);
    }
}

int main() {
    st.push('a');
    st.push('b');
    st.push('c');
    st.push('d');
    reverseStack();
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

