#include<bits/stdc++.h>
using namespace std;

//check out it's time and space complexity
//check out other solution given at end of the page of o(n) method: https://www.geeksforgeeks.org/diameter-of-a-binary-tree/
struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;

    Node(int x){
        data=x;
    }
};

int heightOfTree(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftHeight=0,rightHeight=0;
    if(root->left!=NULL){
        leftHeight=heightOfTree(root->left);
    }

    if(root->right!=NULL){
        rightHeight=heightOfTree(root->right);
    }

    return max(leftHeight+1,rightHeight+1);
}

int diameterOfTree(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftHeight=heightOfTree(root->left);
    int rightHeight=heightOfTree(root->right);

    int diameterOfLeftTree=diameterOfTree(root->left);
    int diamterOfRightTree=diameterOfTree(root->right);

    return max(leftHeight+rightHeight+1,max(diameterOfLeftTree,diamterOfRightTree));

}



int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->left->left = new Node(4);
    root->right = new Node(3);
    root->left->right = new Node(5);

    cout<<diameterOfTree(root);
    return 0;
}
