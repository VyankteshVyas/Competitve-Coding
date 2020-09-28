#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node* left=NULL;
    Node* right=NULL;
    int val;
};

Node* createNewNode(int val){
    Node* node=new Node();
    node->val=val;
    return node;
}

void nthInorder(Node* root,int n){
    static int x=0;
    if(root==NULL){
        return;
    }
    if(x>n){
        return;
    }
    if(root->left!=NULL){
        nthInorder(root->left,n);
    }
    x++;
    if(x==n){
        cout<<root->val;
        x++;
        return;
    }
    if(root->right!=NULL){
        nthInorder(root->right,n);
    }

}

int main(){
    Node* root = createNewNode(10);
    root->left = createNewNode(20);
    root->right = createNewNode(30);
    root->left->left = createNewNode(40);
    root->left->right = createNewNode(50);
    nthInorder(root,4);

    return 0;
}
