#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next=NULL;
};

Node* createNewNode(int data){
    Node* node=new Node();
    node->data=data;
    return node;
}

Node* insertInLL(Node* head,int data){
    if(head==NULL){
        head=createNewNode(data);
        return head;
    }
    Node* trvs=head;
    while(trvs->next!=NULL){
        trvs=trvs->next;
    }
    trvs->next=createNewNode(data);
    return head;
}

bool isPalindrome(Node* head){
    stack<Node*> s;
    Node* trvs=head;
    s.push(trvs);
    while(trvs->next!=NULL){
        trvs=trvs->next;
        s.push(trvs);
    }
    trvs=head;
    while(trvs!=NULL){
        int x=s.top()->data;
        s.pop();
        if(trvs->data!=x){
            return false;
        }
        trvs=trvs->next;
    }
    return true;

}

int main(){
    int n;
    cin>>n;
    Node* head=NULL;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        head=insertInLL(head,data);
    }
    Node* trvs=head;
    //printing the linked list.
    
    if(isPalindrome(head)){
        cout<<"yes"<<endl;
    }else cout<<"no"<<endl;
    return 0;
}
