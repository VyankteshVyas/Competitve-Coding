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

Node* insertAtEnd(Node* head,int data){
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

Node* revLLrecurrsive(Node* node,Node* &head){
    if(node==NULL){
        return head;
    }
    if(node->next==NULL){
        head=node;
        return head;
    }
    head=revLLrecurrsive(node->next,head);
    node->next->next=node;
    node->next=NULL;
    return head;
}

void printLL(Node* head){
        Node* trvl=head;
        while(trvl!=NULL){
            cout<<trvl->data<<"->";
            trvl=trvl->next;
        }
}

int main(){
    int n;
    cin>>n;
    Node* head=NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        head=insertAtEnd(head,x);
    }
    printLL(head);
    cout<<"\n";
    head=revLLrecurrsive(head,head);
    printLL(head);
    return 0;
}
