#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next=NULL;
};

Node* newNode(int n)
{
    Node* node=new Node();
    node->data=n;
    return node;
}
Node* insertAtEnd(Node* head,int n){
    if(head==NULL){
        head=newNode(n);
        return head;
    }
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }

    curr->next=newNode(n);
    return head;
}

void printLL(Node* head){
    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
}

Node* moveLastNodeToFirst(Node* head){
    Node* curr=head->next;
    Node* prev=head;

    if(head==NULL||head->next==NULL){
        return head;
    }
    while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    curr->next=head;
    head=curr;
    return head;
}

int main(){
    Node* head=NULL;
    head=insertAtEnd(head,1);

    head=insertAtEnd(head,2);

    head=insertAtEnd(head,3);

    head=insertAtEnd(head,4);

    head=insertAtEnd(head,5);
    cout<<"original linked listt"<<endl;
    printLL(head);
    head=moveLastNodeToFirst(head);
    cout<<"\n mutated linked listt"<<endl;
    printLL(head);
    return 0;
}

