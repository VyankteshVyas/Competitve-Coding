#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left=NULL;
    Node* right=NULL;
};

Node* newNode(int data){
    Node* node=new Node();
    node->key=data;
    return node;
}

void printbottomView(Node* root){
    if(root==NULL){
        return;
    }

    map<int,vector<int>> myMap;
    int hd=0;

    queue<pair<Node*,int>> q;
    q.push(make_pair(root,hd));

    while(!q.empty()){
        pair<Node*,int> currNode=q.front();
        q.pop();
        hd=currNode.second;
        Node* node=currNode.first;

        myMap[hd].push_back(node->key);
        if(node->left!=NULL){
            q.push(make_pair(node->left,hd-1));
        }
        if(node->right!=NULL){
            q.push(make_pair(node->right,hd+1));
        }
    }

    map<int,vector<int>>::iterator it;
    for(it=myMap.begin();it!=myMap.end();it++){
        int vlsize=it->second.size();
        cout<<it->second[vlsize-1];
        cout<<"\n";
    }
}

void printleftView(Node* root){
    if(root==NULL){
        return;
    }

    map<int,int> myMap;
    int vd=0;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,vd));
    while(!q.empty()){
            pair<Node*,int> currNode=q.front();
            q.pop();
            vd=currNode.second;
            Node* node=currNode.first;
            if(myMap.find(vd)==myMap.end()){
                myMap[vd]=(currNode.first)->key;
            }
            if(node->left!=NULL){
                q.push(make_pair(node->left,vd+1));
            }
            if(node->right!=NULL){
                q.push(make_pair(node->right,vd+1));
            }
    }

    map<int,int>::iterator it;
    for(it=myMap.begin();it!=myMap.end();it++){
        cout<<it->second<<endl;
    }
}

void printRightView(Node* root){
    if(root==NULL){
        return;
    }

    map<int,vector<int>> myMap;
    int vd=0;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,vd));
    while(!q.empty()){
            pair<Node*,int> currNode=q.front();
            q.pop();
            vd=currNode.second;
            Node* node=currNode.first;

            myMap[vd].push_back(node->key);

            if(node->left!=NULL){
                q.push(make_pair(node->left,vd+1));
            }
            if(node->right!=NULL){
                q.push(make_pair(node->right,vd+1));
            }
    }

    map<int,vector<int>>::iterator it;
    for(it=myMap.begin();it!=myMap.end();it++){
        int vlsize=it->second.size();
        cout<<it->second[vlsize-1]<<endl;
    }
}



void printTopView(Node* root){
    if(root==NULL){
        return;
    }

    map<int,vector<int>> myMap;
    int hd=0;

    queue<pair<Node*,int>> q;
    q.push(make_pair(root,hd));

    while(!q.empty()){
        pair<Node*,int> currNode=q.front();
        q.pop();
        hd=currNode.second;
        Node* node=currNode.first;

        myMap[hd].push_back(node->key);
        if(node->left!=NULL){
            q.push(make_pair(node->left,hd-1));
        }
        if(node->right!=NULL){
            q.push(make_pair(node->right,hd+1));
        }
    }

    map<int,vector<int>>::iterator it;
    for(it=myMap.begin();it!=myMap.end();it++){
        cout<<it->second[0];
        cout<<"\n";
    }
}


int main(){
    Node *root = newNode(20);
    root->left = newNode(8);
    root->right = newNode(22);
    root->left->left = newNode(5);
    root->left->right = newNode(3);
    root->right->left = newNode(4);
    root->right->right = newNode(25);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    cout<<"Top view is \n";
    printTopView(root);
    cout<<"left view is \n";
    printleftView(root);
    cout<<"bottom view is \n";
    printbottomView(root);
    cout<<"right view is \n";
    printRightView(root);
    return 0;
}

