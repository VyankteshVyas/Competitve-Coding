#include<bits/stdc++.h>
using namespace std;

//check out space and time complexity
//also see the concept of static keyword in c++
struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;
};

Node* newNode(int data){
    Node* node=new Node();
    node->data=data;
    return node;
}

void NthInorder(Node* root,int n){
    static int counter=0;
    if(root==NULL){
        return;
    }
    NthInorder(root->left,n);
    counter++;
    if(counter==n){
        cout<<root->data;
    }
    NthInorder(root->right,n);

}

int main(){
    Node* root=NULL;
    root=newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);

    int n = 4;

    NthInorder(root, n);
    return 0;
}
