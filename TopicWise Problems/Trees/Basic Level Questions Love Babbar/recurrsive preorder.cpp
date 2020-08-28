#include<bits/stdc++.h>
using namespace std;

//check out more traversal question in the traversal section here: https://www.geeksforgeeks.org/binary-tree-data-structure/
struct Node{
    int key;
    Node *left,*right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->key<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){

    Node *root = new Node(10);
  root->left        = new Node(8);
  root->right       = new Node(2);
  root->left->left  = new Node(3);
  root->left->right = new Node(5);
  root->right->left = new Node(2);




    cout<<endl;
    preOrder(root);

    return 0;
}

/* Constructed binary tree is
            10
          /   \
        8      2
      /  \    /
    3     5  2
  */
