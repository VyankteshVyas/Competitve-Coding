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

void inorderiterative(Node *root){
    stack<Node*> s;
    Node *curr=root;
    while(curr||!s.empty()){
        while(curr){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->key<<" ";
        curr=curr->right;
    }
}

void inorderreccursive(Node *root){
    if(!root) return;
    inorderreccursive(root->left);
    cout<<root->key<<" ";
    inorderreccursive(root->right);
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

    inorderiterative(root);
    cout<<endl;
    return 0;

}
