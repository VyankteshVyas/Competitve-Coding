#include<bits/stdc++.h>
using namespace std;

//check out it's time and space complexity
//Also see the other method too from this article : https://www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/
struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;

    Node(int x){
        data=x;
    }
};

void printGivenLevel(Node* root,int level){
    if(root==NULL){
        return;
    }

    if(level==1){
        cout<<root->data<<" ";
    }else{
        printGivenLevel(root->left,level-1);
        printGivenLevel(root->right,level-1);
    }


}

int heightOfTree(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftHeight=heightOfTree(root->left);
    int rightHeight=heightOfTree(root->right);

    return max(leftHeight+1,rightHeight+1);
}

void levelOrderTraversal(Node* root){
    int treeHeight=heightOfTree(root);
    for(int i=1;i<=treeHeight;i++){
        printGivenLevel(root,i);
    }
}

void mirrorOfTree(Node* root){
    if(root==NULL){
        return ;
    }

    mirrorOfTree(root->left);
    mirrorOfTree(root->right);

    Node* leftPart=root->left;
    root->left=root->right;
    root->right=leftPart;

}


int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->left->left = new Node(4);
    root->right = new Node(3);
    root->left->right = new Node(5);
    levelOrderTraversal(root);
    cout<<"\n";
    mirrorOfTree(root);
    levelOrderTraversal(root);

    return 0;
}
