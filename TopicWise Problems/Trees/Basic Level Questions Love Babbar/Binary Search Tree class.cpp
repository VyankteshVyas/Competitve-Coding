#include<bits/stdc++.h>
using namespace std;

//check out it's time and space complexity
//level order, inorder,preorder and post order traversal of BSt is same as binary tree.
struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;
};

class BST{
public:
    Node* insertioninBST(Node* root,int data){
        if(root==NULL){
            Node* node=new Node();
            node->data=data;
            root=node;
            return root;
        }

        if(root->data>data){
            root->left=insertioninBST(root->left,data);
        }

        if(root->data<data){
            root->right=insertioninBST(root->right,data);
        }

        return root;
    }

    void inorder(Node* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }

    Node* searchInBST(Node* root,int key){
        if(root==NULL||root->data==key){
            return root;
        }
        Node* ans;
        if(root->data<key){
            ans=searchInBST(root->right,key);
        }
        if(root->data>key){
            ans=searchInBST(root->left,key);
        }
        return ans;
    }

    bool isBst(Node* root){
        if(root==NULL){
            return true;
        }

        if(root->left!=NULL&&root->left->data>=root->data){
            return false;
        }
        if(root->right!=NULL&&root->right->data<=root->data){
            return false;
        }

        return isBst(root->left)&&isBst(root->right);
    }

    void printAllToLeafNodes(Node* root,vector<int> v){
        if(root==NULL){
            return;
        }
        v.push_back(root->data);
        if(root->left==NULL&&root->right==NULL){
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
                if(i+1!=v.size()){
                    cout<<"->";
                }
            }
            cout<<"\n";
        }else{
            printAllToLeafNodes(root->left,v);
            printAllToLeafNodes(root->right,v);
        }

    }

};

int main(){
    Node* root=NULL;
    BST bst;
    root=bst.insertioninBST(root,50);
    root=bst.insertioninBST(root,30);
    root=bst.insertioninBST(root,20);
    root=bst.insertioninBST(root,40);
    root=bst.insertioninBST(root,70);
    root=bst.insertioninBST(root,60);
    root=bst.insertioninBST(root,80);

    bst.inorder(root);
    cout<<"\n";
    Node* searchResult=bst.searchInBST(root,70);
    if(searchResult!=NULL){
        cout<<"node is present"<<endl;
    }else cout<<"node is not present"<<endl;
    if(bst.isBst(root)){
        cout<<"The tree is BST"<<endl;
    }else cout<<"The tree is not BST"<<endl;

    cout<<"printing all paths to leaf node"<<"\n";
    vector<int> v;
    bst.printAllToLeafNodes(root,v);
    return 0;
}
