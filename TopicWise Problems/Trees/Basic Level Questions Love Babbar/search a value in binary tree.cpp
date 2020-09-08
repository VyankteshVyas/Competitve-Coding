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


bool ifNodeExists(Node* root,int key){
    if(root==NULL){
        return false;
    }

    if(root->data==key){
        return true;
    }

    if(root->left!=NULL&&ifNodeExists(root->left,key)){
        return true;
    }

    if(root->right!=NULL&&ifNodeExists(root->right,key)){
        return true;
    }

    return false;
}

int main(){
    Node *root=new Node(10);
    root->left=new Node(11);
    root->left->left = new Node(7);
    root->right = new Node(9);
    root->right->left = new Node(15);
    root->right->right = new Node(8);
    if(ifNodeExists(root,5)){
        cout<<"yes";
    }else cout<<"no";
    return 0;
}
