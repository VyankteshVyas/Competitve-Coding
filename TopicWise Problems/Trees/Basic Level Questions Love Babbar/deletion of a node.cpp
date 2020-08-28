#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left,*right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};

void levelorder(Node* root){
    queue<Node*> q;
    q.push(root);

    Node* temp;
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        cout<<temp->key<<"->";
    }
}

Node *deletion(int key,Node* root){
    if(root==NULL){
        return root;
    }

    if(root->left==NULL&&root->right==NULL){
        if(root->key==key){
            return NULL;
        }
        return root;
    }

    queue<Node*> q;
    q.push(root);

    Node* temp=NULL;
    Node* keynode=NULL;

    while(!q.empty()){
        temp=q.front();
        q.pop();

        if(temp->key==key){
            keynode=temp;
        }

        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }

    }

    if(keynode!=NULL){
        int x=temp->key;
        temp=NULL;
        keynode->key=x;
    }
    return root;
}

int main(){

    Node *root=new Node(10);
    root->left=new Node(11);
    root->left->left = new Node(7);
    root->left->right = new Node(12);
    root->right = new Node(9);
    root->right->left = new Node(15);
    root->right->right = new Node(8);

    cout << level order traversal before insertion:";
    levelorder(root);
    cout<<endl;
    deletion(12,root);
    levelorder(root);

    return 0;
}
