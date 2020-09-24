#include <bits/stdc++.h>
using namespace std;

stack<char> st;
string ns;

void insertAtBottom(char x){
    if(st.size()==0){
        st.push(x);
    }else{
        char c=st.top();
        st.pop();

        insertAtBottom(x);
        st.push(c);
    }
}

void reverseStack(){
    if(st.size()>0){
        char c=st.top();
        st.pop();
        reverseStack();

        insertAtBottom(c);
    }
}

int main()
{
    // push elements into
    // the stack
	st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');

    cout<<"Original Stack"<<endl;

    // print the elements
    // of original stack
    cout<<"1"<<" "<<"2"<<" "
        <<"3"<<" "<<"4"
        <<endl;

    // function to reverse
    // the stack
    reverseStack();
    cout<<"Reversed Stack"
        <<endl;

    // storing values of reversed
    // stack into a string for display
    while(!st.empty())
    {
        char p=st.top();
        st.pop();
        ns+=p;
    }

    //display of reversed stack
    cout<<ns[3]<<" "<<ns[2]<<" "
        <<ns[1]<<" "<<ns[0]<<endl;

	return 0;
}
