#include<bits/stdc++.h>
using namespace std;

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

void printLB(Node* root){
    if(root!=NULL){
        if(root->left!=NULL){
            cout<<root->data<<" ";
            printLB(root->left);
        }else{
            if(root->right!=NULL){
                cout<<root->data<<" ";
                printLB(root->right);
            }
        }
    }
}

void printRB(Node* root){
    if(root!=NULL){
        if(root->right!=NULL){
            cout<<root->data<<" ";
            printRB(root->right);
        }else{
            if(root->left!=NULL){
                cout<<root->data<<" ";
                printRB(root->left);
            }
        }
    }
}

void printLN(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL&&root->right==NULL){
        cout<<root->data<<" ";
        return;
    }

    printLN(root->left);
    printLN(root->right);
}

void printBoundary(Node* root){
    printLB(root);
    printLN(root);
    printRB(root->right);

}

int main(){
    Node* root=NULL;
    root=newNode(20);
    root->left = newNode(8);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right = newNode(22);
    root->right->right = newNode(25);

    printBoundary(root);
    return 0;
}

