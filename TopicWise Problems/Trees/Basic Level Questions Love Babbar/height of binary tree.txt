#include<bits/stdc++.h>
using namespace std;

//check out it's time and space complexity

struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;

    Node(int x){
        data=x;
    }
};


int heightOfTree(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftHeight=0,rightHeight=0;
    if(root->left!=NULL){
        leftHeight=heightOfTree(root->left);
    }

    if(root->right!=NULL){
        rightHeight=heightOfTree(root->right);
    }

    return max(leftHeight+1,rightHeight+1);
}

int main(){
    Node *root=new Node(10);
    root->left=new Node(11);
    root->left->left = new Node(7);
    root->right = new Node(9);
    root->right->left = new Node(15);
    root->right->right = new Node(8);
    cout<<heightOfTree(root);
    return 0;
}
