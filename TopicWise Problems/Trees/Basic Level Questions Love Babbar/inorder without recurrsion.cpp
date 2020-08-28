#include<bits/stdc++.h>
using namespace std;

//https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion/
//check out more traversal question in the traversal section here: https://www.geeksforgeeks.org/binary-tree-data-structure/
struct Node{
    int key;
    Node *left,*right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}

int main(){

    Node *root = new Node(1);
    root->left        = new Node(2);
    root->right       = new Node(3);
    root->left->left  = new Node(4);
    root->left->right = new Node(5);



    cout<<endl;
    inorder(root);

    return 0;
}

/* Constructed binary tree is
              1
            /   \
          2      3
        /  \
      4     5
    */
