#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next=NULL;
};

Node* createNewNode(int val){
    Node* node=new Node();
    node->val=val;
    return node;
}

void* pushToLL(Node* &head,int val){
    if(head==NULL){
        head=createNewNode(val);
        return head;
    }

    Node* trvs=head;
    while(trvs->next!=NULL){
        trvs=trvs->next;
    }

    trvs->next=createNewNode(val);

}

void printLL(Node* head){
    Node* trvs=head;
    if(head==NULL){
        return;
    }
    while(trvs!=NULL){
        cout<<trvs->val<<" ";
        trvs=trvs->next;
    }
    cout<<"\n";
}

Node* removeNode(Node* head,int k){
    if(head==NULL){
        return head;
    }

    if(k==1){
        Node* node=head->next;
        delete(head);
        return node;
    }

    head->next=removeNode(head->next,k-1);
    return head;
}
int main(){
    Node* head=NULL;
    pushToLL(head,3);
    pushToLL(head,2);
    pushToLL(head,6);
    pushToLL(head,5);
    pushToLL(head,11);
    pushToLL(head,10);
    pushToLL(head,15);
    pushToLL(head,12);
    printLL(head);

    head=removeNode(head,4);
    printLL(head);
    return 0;
}

