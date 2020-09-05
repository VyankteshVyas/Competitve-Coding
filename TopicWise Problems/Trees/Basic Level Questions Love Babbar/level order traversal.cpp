#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;

    Node(int x){
        data=x;
    }
};

void levelOrderTravQueue(Node *root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }

    }
}

void printGivenLevel(Node* root,int level){
    if(root==NULL){
        return;
    }

    if(level==1){
        cout<<root->data<<" ";
        return;
    }

    printGivenLevel(root->left,level-1);
    printGivenLevel(root->right,level-1);

}
int treeHeight(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftHeight=treeHeight(root->left);
    int rightHeight=treeHeight(root->right);

    int ans=max(leftHeight+1,rightHeight+1);
    return ans;
}

void levelOrderTravMeth(Node* root){
    int heightofTree=treeHeight(root);

    for(int i=1;i<=heightofTree;i++){
        printGivenLevel(root,i);
    }
}

int main(){
    Node *root=new Node(10);
    root->left=new Node(11);
    root->left->left = new Node(7);
    root->right = new Node(9);
    root->right->left = new Node(15);
    root->right->right = new Node(8);
    levelOrderTravQueue(root);
    cout<<"\n";
    levelOrderTravMeth(root);
    return 0;
}
