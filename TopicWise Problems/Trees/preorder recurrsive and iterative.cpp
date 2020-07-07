#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left,*right;

    Node(int key){
        this->key=key;
        left=right=NULL;
    }
};

void preorderiterative(Node *root){
    if (root == NULL)
        return;

    stack<Node*> st;

    // start from root node (set current node to root node)
    Node* curr = root;

    // run till stack is not empty or current is
    // not NULL
    while (!st.empty() || curr != NULL)
    {
        // Print left children while exist
        // and keep pushing right into the
        // stack.
        while (curr != NULL)
        {
            cout << curr->key << " ";

            if (curr->right)
                st.push(curr->right);

            curr = curr->left;
        }

        // We reach when curr is NULL, so We
        // take out a right child from stack
        if (st.empty() == false)
        {
           curr = st.top();
           st.pop();
        }
    }
}

void preorderreccursive(Node *root){
    if(!root) return;
    cout<<root->key<<" ";
    preorderreccursive(root->left);
    preorderreccursive(root->right);
}
int main() {

    Node *root=new Node(5);
    Node* temp1=new Node(11);
    Node* temp2=new Node(7);
    Node* temp3=new Node(9);
    Node* temp4=new Node(15);
    Node* temp5=new Node(8);

    root->left=temp1;
    root->right=temp3;
    temp1->left=temp2;
    temp3->left=temp4;
    temp3->right=temp5;

    preorderiterative(root);
    cout<<endl;
    preorderreccursive(root);
    return 0;

}
