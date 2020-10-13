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

void printDiagonalTraversal(Node* head){
    queue<Node*> q;
    q.push(head);
    q.push(NULL);
    while(!q.empty()){
        if(q.front()==NULL){
            q.push(NULL);
            q.pop();
            if(q.front()==NULL){
                break;
            }
            cout<<"\n";
        }
        Node* node=q.front();
        q.pop();
        while(node!=NULL){
            cout<<node->data<<" ";

            if(node->left!=NULL){
                q.push(node->left);
            }
            node=node->right;
        }
    }
}

int main(){
    Node* head=NULL;
    head=newNode(8);
    head->left=newNode(3);
    head->right=newNode(10);
    head->left->left=newNode(1);
    head->right->left=newNode(6);
    head->right->left->left=newNode(4);
    head->right->right=newNode(14);
    head->right->right->left=newNode(13);
    head->right->left->right=newNode(7);
    printDiagonalTraversal(head);
    return 0;
}

//    queue<pair<Node*,int>> q;
//    q.push(make_pair(head,0));
//    unordered_map<int,vector<int>> umap;
//    int maxLevel=0;
//    while(!q.empty()){
//        pair<Node*,int> p=q.front();
//        q.pop();
//        Node* currNode=p.first;
//        umap[p.second].push_back(currNode->data);
//        if(currNode->right!=NULL){
//          q.push(make_pair(currNode->right,p.second));
//        }
//        if(currNode->left!=NULL){
//            q.push(make_pair(currNode->left,p.second+1));
//            if(p.second+1>maxLevel){
//                maxLevel=p.second+1;
//            }
//        }
//    }
//    for(int i=0;i<=maxLevel;i++){
//        vector<int> temp=umap[i];
//        for(int i=0;i<temp.size();i++){
//            cout<<temp[i]<<" ";
//        }
//        cout<<"\n";
//    }

