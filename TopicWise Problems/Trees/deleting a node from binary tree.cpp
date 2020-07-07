#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//imp :https://www.geeksforgeeks.org/deletion-binary-tree/
struct Node{
    int key;
    Node *left,*right;
    Node(int val){
        key=val;
        left=right=NULL;
    }
};

void inorder(Node *node){

    if(!node) return;

    inorder(node->left);

    cout<<node->key<<" ";

    inorder(node->right);

}

void insert(Node *node,int key){
    queue<Node*> q;
    q.push(node);

    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }else{
            Node *temp1=new Node(key);
            temp->left=temp1;
            break;
        }

        if(temp->right){
            q.push(temp->right);
        }else{
            Node *temp1=new Node(key);
            temp->right=temp1;
            break;
        }
    }
}

Node* deletion(Node *node,int key){
    if(node==NULL||(node->left==NULL&&node->right==NULL&&node->key==key)) return NULL;
    queue<Node*> q;
    q.push(node);

    Node *keynode=NULL;
    Node *temp=q.front();
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(temp->key==key){
            keynode=temp;
        }
        if(temp->left)q.push(temp->left);

        if(temp->right) q.push(temp->right);
    }
    if(keynode!=NULL){
        keynode->key=temp->key;
        temp=NULL;
    }

    return node;
}

int main() {

    Node *root=new Node(5);
    Node* temp1=new Node(11);
    Node* temp2=new Node(7);
    Node* temp3=new Node(9);
    Node* temp4=new Node(15);
    Node* temp5=new Node(8);

    root->left=temp1;
    root->right=temp3;
    temp1->left=temp2;
    temp3->left=temp4;
    temp3->right=temp5;

    inorder(root);
    cout<<endl;
    root=deletion(root,11);
    inorder(root);

    return 0;

}
