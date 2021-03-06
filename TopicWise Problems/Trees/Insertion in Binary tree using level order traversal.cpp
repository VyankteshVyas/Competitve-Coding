#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// imp links : https://www.geeksforgeeks.org/structures-in-cpp/
//https://www.geeksforgeeks.org/difference-c-structures-c-structures/

struct Node{
    //Data members
    int key;
    //here did mistake of writing Node* left,right instead of Node *left,*right
    Node *left,*right;
    //we have not used functions here inside structure.member functions are allowed and they are
    //exactly same as fuctions inside class. we can access them the way we access data members.

    //Constructor feature inside structure in c++ not avalilable in c
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

void insert(Node* node,int key){
    queue<Node*> q;
    q.push(node);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }else{
            Node* temp1=new Node(key);
            temp->left=temp1;
            break;
        }

        if(temp->right){
            q.push(temp->right);
        }else{
            Node* temp1=new Node(key);
            temp->right=temp1;
            break;
        }

    }

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
    insert(root,12);
    inorder(root);

    return 0;

}
