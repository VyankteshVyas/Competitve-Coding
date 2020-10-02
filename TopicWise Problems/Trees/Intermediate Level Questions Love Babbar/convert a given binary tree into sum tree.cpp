#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;

};

Node* newNode(int key){
    Node* node=new Node();
    node->data=key;
    return node;
}

int toSumTree(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftPart=0,rightPart=0;
    if(root->left!=NULL){
        leftPart=toSumTree(root->left);
    }
    if(root->right!=NULL){
        rightPart=toSumTree(root->right);
    }
    int rootVal=root->data;
    root->data=leftPart+rightPart;
    return rootVal+root->data;
}

void printInorder(Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout<<" "<<node->data;
    printInorder(node->right);
}

int main(){
    Node *root = NULL;
    root = newNode(10);
    root->left = newNode(-2);
    root->right = newNode(6);
    root->left->left = newNode(8);
    root->left->right = newNode(-4);
    root->right->left = newNode(7);
    root->right->right = newNode(5);

    printInorder(root);
    cout<<"\n";
    toSumTree(root);
    cout<<"\n";
    printInorder(root);



    return 0;
}
