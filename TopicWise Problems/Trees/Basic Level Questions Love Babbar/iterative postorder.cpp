#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left , *right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};

void iterativePostOrder(Node *temp){
    if(temp==NULL){
        return;
    }

    stack<Node*> s1,s2;
    s1.push(temp);
    while(!s1.empty()){
        Node* temp=s1.top();
        s1.pop();
        s2.push(temp);
        if(temp->left){
            s1.push(temp->left);
        }
        if(temp->right){
            s1.push(temp->right);
        }
    }

    while(!s2.empty()){
        Node *temp=s2.top();
        s2.pop();
        cout<<temp->key<<" ";
    }
}


void insert(Node *temp,int key){
    queue<Node*> q;
    q.push(temp);

    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        if(!temp->left){
            temp->left=new Node(key);
            break;
        }else q.push(temp->left);

        if(!temp->right){
            temp->right=new Node(key);
            break;
        }else{
            q.push(temp->right);
        }

    }
}

int main(){

    Node *root=new Node(10);
    root->left=new Node(11);
    root->left->left = new Node(7);
    root->right = new Node(9);
    root->right->left = new Node(15);
    root->right->right = new Node(8);

    cout<<"Post order iterative :";
    iterativePostOrder(root);
    cout<<"\n";
    return 0;
}
