#include<bits/stdc++.h>
using namespace std;

//check out iterative preorder optimised space complexity code here: https://www.geeksforgeeks.org/iterative-preorder-traversal/
//check out more traversal question in the traversal section here: https://www.geeksforgeeks.org/binary-tree-data-structure/
struct Node{
    int key;
    Node *left,*right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};

void iterativePreorder(Node* root){
    if(root==NULL){
        return;
    }
    stack<Node*> s;
    s.push(root);
    while(!s.empty()){
        Node* curr=s.top();
        s.pop();
        cout<<curr->key<<" ";

        if(curr->right!=NULL){
            s.push(curr->right);
        }
        if(curr->left!=NULL){
            s.push(curr->left);
        }
    }
}

int main(){

    Node *root = new Node(10);
  root->left        = new Node(8);
  root->right       = new Node(2);
  root->left->left  = new Node(3);
  root->left->right = new Node(5);
  root->right->left = new Node(2);




    cout<<endl;
    iterativePreorder(root);

    return 0;
}

/* Constructed binary tree is
            10
          /   \
        8      2
      /  \    /
    3     5  2
  */
